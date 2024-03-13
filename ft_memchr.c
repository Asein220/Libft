/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:08:03 by atembras          #+#    #+#             */
/*   Updated: 2023/10/09 18:00:05 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	if (n == 0)
		return (0);
	if (*str == (unsigned char)c)
		return ((void *)str);
	return (ft_memchr(str + 1, c, n -1));
}
	/*Comparamos el byte actual con el valor buscado.*/