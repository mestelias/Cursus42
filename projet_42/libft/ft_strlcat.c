/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:11:50 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/29 18:31:25 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = -1;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size <= d)
		return (s + size);
	while (src[++i] && i < size - d - 1)
		dst[d + i] = src[i];
	dst[d + i] = '\0';
	return (d + s);
}
