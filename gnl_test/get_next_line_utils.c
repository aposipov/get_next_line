#include "get_next_line.h"

size_t	gnl_strlen(const char *s)
{
    int	i;

    if (s == NULL)
        return (0);

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char	*gnl_strjoin(char *str1, char *str2)
{
    char	*str;
    char	*dst;
    size_t	len;

    len = 0;
    if (!str1 && !str2)
        return (NULL);
    if (!str1 && str2)
        len = gnl_strlen(str2) + 1;
    else if (str1 && str2)
        len = gnl_strlen(str1) + gnl_strlen(str2) + 1;
    str = malloc(sizeof(*str) * (len));
    if (!str)
        return (NULL);
    dst = str;
    if (str1)
        while (*str1)
            *str++ = *str1++;
    if (str2)
        while (*str2)
            *str++ = *str2++;
    *str = 0;
    //free(str);
    return (dst);
}

char	*gnl_strchr(const char *s, int c)
{
    while (*s != '\0' && *s != (char)c)
        s++;
    if (*s == (char)c)
        return ((char *)s);
    else
        return (NULL);
}