/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:26:38 by lchristi          #+#    #+#             */
/*   Updated: 2021/11/14 19:18:56 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>


size_t	gnl_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*gnl_strjoin(const char *str1, const char *str2)
{
	char	*str;
	int	i;
	int j;
	
	i = 0;
	j = 0;
	if (!str1 || !str2)
		return (NULL);
	str = malloc(sizeof(char) * (gnl_strlen(str1) + gnl_strlen(str2) + 1));
	if (!str)
		return (NULL);
	while (str1[i])
	{
		str[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		str[i] = str2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char *gnl_strchr(const char *str, int c)
{
	
}

//int main()
//{
//	printf("%ld\n", gnl_strlen("qwertystring10\0\n"));
//	printf("%s\n", gnl_strjoin("123", "qwerty"));
//	return (0);
//}
