
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
char	*gnl_strjoin(char *str1, char *str2);
char	*gnl_strchr(const char *s, int c);
char    *gnl_newline(char *buffer);

#endif
