/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:25:24 by atembras          #+#    #+#             */
/*   Updated: 2023/09/25 19:17:36 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*n_str;
	int		i;
	size_t	lenght;

	i = 0;
	lenght = ft_strlen((char *)str);
	n_str = (char *)malloc(lenght + 1);
	if (n_str == NULL)
		return (NULL);
	while (str[i])
	{
		n_str[i] = str[i];
		i ++;
	}
	n_str[i] = '\0';
	return (n_str);
}
