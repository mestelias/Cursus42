/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:21:08 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/29 10:37:54 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	if (!*little)
		return ((char *)big);
	i = -1;
	n = ft_strlen(little);
	while (big[++i] && (i + n <= len))
		if (!ft_strncmp(big + i, little, n))
			return ((char *)big + i);
	return (NULL);
}
