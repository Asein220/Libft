/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atembras <atembras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:33:29 by atembras          #+#    #+#             */
/*   Updated: 2023/10/06 18:38:05 by atembras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	string_len;
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	string_len = ft_strlen((char *)s);
	if (start >= string_len)
		return (ft_strdup(""));
	if (string_len - start < len)
		len = string_len - start;
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
