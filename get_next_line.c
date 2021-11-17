/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:24:32 by lchristi          #+#    #+#             */
/*   Updated: 2021/11/15 11:09:21 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	b[BUFFER_SIZE + 1];
	static	int i;
	static int count_lines;
	int		j;
	char	*word;
	char	*word2;
	char	*result;
	long	count;

	if (b[i] == '\n')
		i++;
	
	if (b[i] == '\0')
	{
		count = read(fd, b, BUFFER_SIZE);
	    b[count] = '\0';
	//	printf("new buffer:%s\n", b);
		i = 0;
	}
	j = 0;
	while (b[i + j] && b[i + j] != '\n')
	{
		//printf("%c", b[i]);
		j++;
	}
	//j += (b[i + j] == '\n');
	word = malloc(sizeof(j) + 1 + sizeof(b[i + j] == '\n'));
	if (!word)
		return (NULL);
	//printf("\n");
	j = 0;
	while (b[i] && b[i] != '\n')
	{
		word[j] = b[i];
		j++;
		i++;
	}
	if (b[i] == '\n')
		word[j++] = '\n';
	word[j] = '\0';
	while (b[i] != '\n')
	{
		count = read(fd, b, BUFFER_SIZE);
		b[count] = '\0';
		//
		i = 0;
		while (b[i + j] && b[i + j] != '\n')
		{
			//printf("%c", b[i]);
			j++;
		}
		//j += (b[i + j] == '\n');
		word2 = malloc(sizeof(j) + 1 + sizeof(b[i + j] == '\n'));
		if (!word2)
			return (NULL);
		j = 0;
		while (b[i] && b[i] != '\n')
		{
			word2[j] = b[i];
			j++;
			i++;
		}
		if (b[i] == '\n')
			word2[j++] = '\n'; 
		word2[j] = '\0';
		result = gnl_strjoin(word, word2);
		free(word);
		free(word2);
		word = result;

	}		
	printf("%s\n", word);
	//printf("%s\n", word2);
	free(word);
	count_lines++;
	return (b);
}

int	main(void)
{
	int	fd;

	fd = open ("./gnl_files/test1.txt", O_RDONLY);
	//while (fd)
	//	get_next_line(fd);
	
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);

	//printf("%s\n", get_next_line(fd));
	
	close(fd);
	return (0);
}
