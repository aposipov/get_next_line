#include "get_next_line.h"

char    *gnl_reading(char *buffer, char *tmp, int fd)
{
    int br = 1;
    char *str;
    size_t i;

    if (!buffer)
        buffer = (char *) ft_calloc(1,1);
        //buffer = (char *) malloc(1);
        //buffer[1]='\0';
    while (br)
    {
        br = read(fd, tmp, BUFFER_SIZE);
        if (br < 0)
        {
            free(buffer);
            free(tmp);
            return (NULL);
        }
        tmp[br] = '\0';
        str = gnl_strjoin(buffer, tmp);
        free(buffer);
        buffer = str;

        //if (gnl_strchr(buffer, '\n'))
            //i = gnl_strlen(buffer);
            //break;
    }
    printf("br = %d\n", br);
    printf("i = %d\n", i);
    printf("buffer 2 =%s\n\n", buffer);
    return (buffer);
}

char *get_next_line(int fd)
{
    static char *buffer = NULL;
    char *tmp;
    //int rb;

    if (BUFFER_SIZE <= 0 || fd < 0)
        return (NULL);

    tmp = malloc(BUFFER_SIZE + 1);
    if (!tmp)
        return (NULL);

    buffer = gnl_reading(buffer, tmp, fd);

    if (tmp)
        free(tmp);
    if (!buffer)
        return (NULL);

    //rb = read(fd, tmp, BUFFER_SIZE);
    //tmp[rb] = '\0';

    //buffer = gnl_strjoin(buffer, tmp);

    printf("tmp =%s\n", tmp);
    printf("buffer =%s\n\n", buffer);
    return (tmp);
}

int main()
{
    int fd;

    fd = open("text.txt", O_RDONLY);
    //fd = open("text_0.txt", O_RDONLY);
    printf("fd = %d\n\n", fd);
    //printf("%s\n", get_next_line(fd));
    get_next_line(fd);
    //get_next_line(fd);
    //get_next_line(fd);
    /*get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);*/
    close(fd);
    return (0);
}