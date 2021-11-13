/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:26:38 by lchristi          #+#    #+#             */
/*   Updated: 2021/11/13 14:19:39 by lchristi         ###   ########.fr       */
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
	char	*result;
	size_t	n;

	n = 0;
	n = gnl_strlen(str1) + gnl_strlen(str2) + 1;
	str = malloc(sizeof(str) * n);
	result = str;
	if (str1)
		while (*str1)
			*str++ = *str1++;
	if (str2)
		while (*str2)
			*str++ = *str2++;
	*str = 0;
	printf ("%s\n", str);
	return (result);
}

int main()
{
	printf("%ld\n", gnl_strlen("qwertystring10\0\n"));
	
	printf("%s\n", gnl_strjoin("123", "456"));
	return (0);
}
