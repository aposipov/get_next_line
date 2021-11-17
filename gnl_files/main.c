#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

//char *ft_get(int fd)
//{
//	static char	b[10];

//	read(fd, b, 9);
//	b[9] = '\0';

//	return (b);
//}

int main ()
{
	int fd;
	char buf[10];

	fd = open("./test1.txt", O_RDONLY);
	printf("%d\n", fd);
	read(fd, buf, 9);
	printf("%s\n", buf);
	//printf("%s\n", ft_get(fd));
	//printf("%s\n", example(fd));
	//printf("%s\n", example(fd));
	close(fd);
	return (0);
}
