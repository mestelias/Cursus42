/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:11:50 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/21 18:58:35 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	j = 0;
	len = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[len])
		len++;
	if (size <= i)
		return (size + len);
	while (src[j] && ((j + i) < (size - 1)))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (len + i);
}
