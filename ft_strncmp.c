/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:49:23 by atembras          #+#    #+#             */
/*   Updated: 2023/09/19 18:58:10 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	u;

	u = 0;
	while ((s1[u] != '\0' || s2[u] != '\0') && u < n)
	{
		if (s1[u] != s2[u])
		{
			return ((unsigned char)s1[u] - (unsigned char)s2[u]);
		}
		u ++;
	}
	if ((s2[u] == '\0' || u == n))
	{
		return (0);
	}
	else
	{
		return ((unsigned char)-s2[u]);
	}
}
