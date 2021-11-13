/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:26:38 by lchristi          #+#    #+#             */
/*   Updated: 2021/11/13 16:23:00 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>


size_t	gnl_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
//		if (str[i] == '\0')
//			i++;
//		if (str[i] == '\n')
//			i++;
	}
	return (i);
}

char	*gnl_strjoin(const char *str1, const char *str2)
{
	char	*str;
	//char	*result;
	int	n;
	int k;
	
	n = 0;
	k = 0;
	//n = gnl_strlen(str1) + gnl_strlen(str2) + 1;
	str = malloc(sizeof(char) * (gnl_strlen(str1) + gnl_strlen(str2) + 1));
	if (!str)
		return (NULL);
	//result = str;
	while (str1[n])
	{
		str[n] = str1[n];
		n++;
	}
	while (str2[k])
	{
		str[n] = str2[k];
		n++;
		k++;
	}
	str[n] = '\0';
	return (str);
}

int main()
{
	printf("%ld\n", gnl_strlen("qwertystring10\0\n"));
	printf("%s\n", gnl_strjoin("123", "456789"));
	return (0);
}
