/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:24:32 by lchristi          #+#    #+#             */
/*   Updated: 2021/11/15 00:24:46 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	b[10];
	static	int i;
	int j;
	char *word;
	char *word2;
	char *result;

	if (b[i] == ' ')
		i++;
	
	if (b[i] == '\0')
	{
		read(fd, b, 9);
	    b[9] = '\0';
		printf("new buffer:%s\n", b);
		i = 0;
	}
	j = 0;
	while (b[i + j] && b[i + j] != ' ')
	{
		//printf("%c", b[i]);
		j++;
	}
	word = malloc(sizeof(j) + 1);
	if (!word)
		return (NULL);
	//printf("\n");
	j = 0;
	while (b[i] && b[i] != ' ')
	{
		word[j] = b[i];
		j++;
		i++;
	}
	word[j] = '\0';
	if (b[i] != ' ')
	{
		read(fd, b, 9);
		b[9] = '\0';
		//
		i = 0;
		while (b[i + j] && b[i + j] != ' ')
		{
			//printf("%c", b[i]);
			j++;
		}
		word2 = malloc(sizeof(j) + 1);
		if (!word2)
			return (NULL);
		j = 0;
		while (b[i] && b[i] != ' ')
		{
			word2[j] = b[i];
			j++;
			i++;
		}
		word2[j] = '\0';
		result = gnl_strjoin(word, word2);
		free(word);
		free(word2);
		word = result;

	}		
	printf("%s\n", word);
	//printf("%s\n", word2);
	free(word);
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
