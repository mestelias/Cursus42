/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:41:28 by elmestou          #+#    #+#             */
/*   Updated: 2022/01/03 15:28:08 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start > i)
		return ((char *)ft_calloc(sizeof(char), 1));
	if (len >= i - start)
		p = (char *)malloc(sizeof(char) * (i - start + 1));
	else
		p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = -1;
	while (s[++i + start] && i < len)
		p[i] = s[i + start];
	p[i] = '\0';
	return (p);
}

