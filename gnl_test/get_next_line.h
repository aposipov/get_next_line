
#ifndef GNL_TEST_GET_NEXT_LINE_H
#define GNL_TEST_GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

char    *get_next_line(int fd);
size_t  gnl_strlen(const char *str);
char	*gnl_strjoin(char const *str1, char const *str2);
char	*gnl_strchr(const char *s, int c);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);


#endif //GNL_TEST_GET_NEXT_LINE_H
