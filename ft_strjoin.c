/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:35:02 by atembras          #+#    #+#             */
/*   Updated: 2023/09/21 19:24:45 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*def;
	int		i;
	int		j;
	size_t	len_1;
	size_t	len_2;

	i = 0;
	j = 0;
	len_1 = ft_strlen((char *)s1);
	len_2 = ft_strlen((char *)s2);
	def = (char *)malloc(len_1 + len_2 + 1);
	if (!def)
		return (NULL);
	while (s1[i])
	{
		def[i] = s1[i];
		i ++;
	}
	while (s2[j])
	{
		def[i] = s2[j++];
		i ++;
	}
	def[i] = '\0';
	return (def);
}
