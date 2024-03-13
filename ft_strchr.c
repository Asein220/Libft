/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:22:42 by atembras          #+#    #+#             */
/*   Updated: 2023/09/19 12:44:18 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strchr(char *str, int c)
{
	unsigned int	i;
	unsigned char	p;

	i = 0;
	p = c;
	if (p == 0)
	{
		while (str[i])
			i ++;
		return (&str[i]);
	}
	while (str[i])
	{
		if (str[i] == p)
			return (&str[i]);
		i ++;
	}
	return (NULL);
}
