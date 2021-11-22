#include "../get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main ()
{
	int fd;
	int i = 0;

	fd = open("test1.txt", O_RDONLY);
	while (i < 10)
		printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}
