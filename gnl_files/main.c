#include <stdio.h>
#include <unistd.h>
#include <sys/file.h>

char *example(int fd)
{
	char *b[10];
	//int i = 0;

	read (fd, b, 9);
	b[9] = '\0';

	//
	//
	//
	//

	return(*b);
}

int main ()
{
	int fd;
	fd = open("./test1.txt", O_RDONLY);
	printf("%s\n", example(fd));
	printf("%s\n", example(fd));
	printf("%s\n", example(fd));
	close(fd);
	return(0);
}
