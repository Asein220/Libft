/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:38:06 by atembras          #+#    #+#             */
/*   Updated: 2023/10/09 18:36:25 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

int	lenword(int pos, const char *str, char c)
{
	int	len;

	len = 0;
	while (str[pos] != c && str[pos] != '\0')
	{
		len ++;
		pos ++;
	}
	return (len);
}

int	subcounter(const char *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			counter ++;
			while (s[i] != c && s[i] != '\0')
				i ++;
		}
	}
	return (counter);
}

char	**ft_split(const char *s, char c)
{
	int		numstrings;
	char	**result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	numstrings = subcounter(s, c);
	result = (char **)malloc((numstrings + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (j < numstrings)
	{
		while (s[i] == c)
			i ++;
		if (s[i] != '\0')
		{
			result[j] = ft_substr(s, i, lenword(i, s, c));
			j++;
			i += lenword(i, s, c);
		}
	}
	result[numstrings] = NULL;
	return (result);
}
