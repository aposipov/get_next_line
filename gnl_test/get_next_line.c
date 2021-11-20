#include "get_next_line.h"

char    *gnl_newline(char *buffer)
{
    char *str;
    int i;
    int j;

    i = 0;
    j = 0;
    //printf("newline=%s\n", buffer);
    if (!buffer)
        return (NULL);
    while(buffer[i] && buffer[i] != '\n')
        i++;
    if (!buffer[i])
    {
        free(buffer);
        return(NULL);
    }
    str = (char *)malloc(sizeof(char) * (gnl_strlen(buffer) - i + 1));
    if (!str)
        return (NULL);
    i++;
    while (buffer[i])
        str[j++]=buffer[i++];
    str[j] = '\0';
    free(buffer);
    return (str);
}

char    *gnl_line(char *buffer)
{
    char *line;
    int	i;

    i = 0;
    if (!buffer)
        return (NULL);
    while (buffer[i] && buffer[i] != '\n')
        i++;
    line = (char *)malloc(sizeof(char) * (i + 2));
    if (!line)
        return (NULL);
    i = 0;
    while (buffer[i] && buffer[i] != '\n')
    {
      line[i] = buffer[i];
      i++;
    }
    if (buffer[i] == '\n')
    {
        line[i] = buffer[i];
        i++;
    }
    line[i] = '\0';
    //printf("line=%s\n", buffer);
    return (line);
}

char    *gnl_reading(char *buffer, char *line, int fd)
{
    int br = 1;
    
    while (br)
    {
        br = read(fd, line, BUFFER_SIZE);
        if (br < 0)
        {
            free(buffer);
            free(line);
            return (NULL);
        }
        line[br] = '\0';
        buffer = gnl_strjoin(buffer, line);
        if (gnl_strchr(buffer, '\n'))
            break;
    }
    free(line);
    //printf("read=%s\n", buffer);
    return (buffer);
}

char *get_next_line(int fd)
{
    static char *buffer;
    char *line;

    if (BUFFER_SIZE <= 0 || fd < 0)
        return (NULL);

    line = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!line)
        return (NULL);

    buffer = gnl_reading(buffer, line, fd);
    if (!buffer)
        return (NULL);

    line = gnl_line(buffer);
    buffer = gnl_newline(buffer);
    return (line);
}

int main()
{
    int fd;

    //fd = open("text.txt", O_RDONLY);
    fd = open("text_0.txt", O_RDONLY);
    //printf("fd = %d\n\n", fd);
    //while (fd != 0)
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    //get_next_line(fd);
    //get_next_line(fd);
    //get_next_line(fd);
    close(fd);
    return (0);
}