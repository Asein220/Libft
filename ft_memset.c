/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:35:23 by atembras          #+#    #+#             */
/*   Updated: 2023/09/18 19:44:41 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int			i;
	unsigned char			*src;

	i = 0;
	src = s;
	while (i < n)
	{
		src[i] = c;
		i ++;
	}
	return (s);
}
