#include "../get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main ()
{
	int fd;
	//int fd2;
	char *line;

	fd = open("./test1.txt", O_RDONLY);
	while (fd > 0)
	{	
		line = get_next_line(fd);
		if (!line)
		{
			printf("the end\n\n");
			break;
		}
		printf("%s", line);
		free(line);
	}	
	close(fd);
/*	fd2 = open("./test2.txt", O_RDONLY);
	while (fd2 > 0)
	{	
		line = get_next_line(fd2);
		if (!line)
		{
			printf("the end 2\n\n");
			break;
		}
		printf("%s", line);
		free(line);
	}	
	close(fd2);*/
	return (0);
}
