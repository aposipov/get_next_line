/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:24:32 by lchristi          #+#    #+#             */
/*   Updated: 2021/11/14 21:18:01 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	b[10];
	static	int i = 0;

	if (b[i] == '\0')
	{
		read(fd, b, 9);
	    b[9] = '\0';
		i = 0;
	}
	if (b[i] == ' ')
		i++;
	while (b[i] && b[i] != ' ')
	{
		printf("%c", b[i]);
		i++;
	}
	printf("\n");
	return (b);
}

int	main(void)
{
	int	fd;

	fd = open ("./gnl_files/test1.txt", O_RDONLY);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	//printf("%s\n", get_next_line(fd));
	//printf("%s\n", get_next_line(fd));
	//printf("%s\n", get_next_line(fd));
	//printf("%s\n", get_next_line(fd));
	//printf("%s\n", get_next_line(fd));
	//printf("%s\n", get_next_line(fd));
	//printf("%s\n", get_next_line(fd));
	//printf("%s\n", get_next_line(fd));
	
	close(fd);
	return (0);
}
