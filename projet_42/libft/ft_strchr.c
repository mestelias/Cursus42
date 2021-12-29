/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:56:48 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/29 14:34:52 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	i;

	i = c;
	while (s && (*s != '\0'))
	{
		if (*s == i)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == *s)
		return ((char *)s);
	return (NULL);
}
