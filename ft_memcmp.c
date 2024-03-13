/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:00:37 by atembras          #+#    #+#             */
/*   Updated: 2023/10/06 20:21:08 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src;
	unsigned char	*sds;
	size_t			i;

	src = (unsigned char *)s1;
	sds = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (src[i] != sds[i])
			return (src[i] - sds[i]);
		i++;
	}
	return (0);
}
