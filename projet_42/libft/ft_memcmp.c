/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:12:39 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/29 14:34:25 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	unsigned const char	*p;
	unsigned const char	*s;

	i = 0;
	p = s1;
	s = s2;
	if (n == 0)
		return (0);
	while ((p + i) && (s + i) && (p[i] == s[i] && i < (n - 1)))
		i++;
	return (p[i] - s[i]);
}
