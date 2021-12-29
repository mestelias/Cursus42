/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:36:45 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/29 17:22:56 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void				*p;

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	p = ft_memset(p, 0, nmemb * size);
	return (p);
}
