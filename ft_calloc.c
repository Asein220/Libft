/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:04:54 by atembras          #+#    #+#             */
/*   Updated: 2023/09/21 18:15:21 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_elements;
	char	*p;

	total_elements = nmemb * size;
	p = (char *)malloc(total_elements);
	if (p != NULL)
		ft_memset(p, 0, total_elements);
	return (p);
}
