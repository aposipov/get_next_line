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

char	*gnl_strjoin(char const *str1, char const *str2)
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
    return (dst);
}


char	*gnl_strchr(const char *s, int c)
{
    while (*s != '\0' && *s != (char)c) // ? \0
        s++;
    if (*s == (char)c)
        return ((char *)s);
    else
        return (NULL);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
    char	*s;

    s = malloc(nmemb * size);
    if (!s)
        return (NULL);
    ft_bzero(s, nmemb * size);
    return (s);
}

void	ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

void	*ft_memset(void *s, int c, size_t n)
{
    size_t	i;

    i = 0;
    while (i < n)
        ((unsigned char *)s)[i++] = (unsigned char)c;
    return (s);
}