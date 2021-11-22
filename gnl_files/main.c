#include "../get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main ()
{
	int fd;
	int i = 0;
	char *line;

	fd = open("test1.txt", O_RDONLY);
	while (i < 25)
	{	
		line = get_next_line(fd);	
		printf("%s", line);
		i++;
		free(line);
	}	
	close(fd);
	return (0);
}
