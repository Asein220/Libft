/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:53:10 by atembras          #+#    #+#             */
/*   Updated: 2023/09/19 12:27:17 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char			*d;
	char			*s;
	unsigned int	i;

	d = dest;
	s = src;
	i = 0;
	if (n == 0 || src == dest)
		return (dest);
	if (dest > src)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{	
			d[i] = s[i];
			i ++;
		}
	}
	return (dest);
}
