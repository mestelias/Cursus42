/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:14:00 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/21 18:57:23 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;

	d = dest;
	if (!dest && !src)
		return (NULL);
	if (d > (unsigned char *)src)
		while (n--)
			*(d + n) = *((unsigned char *)src + n);
	else
		while (n--)
			*d++ = *((unsigned char *)src++);
	return (dest);
}
