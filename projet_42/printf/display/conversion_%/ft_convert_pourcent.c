/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pourcent.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:52:22 by elmestou          #+#    #+#             */
/*   Updated: 2022/03/21 15:04:24 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*fill_res(char *res)
{
	res = (char *)malloc(sizeof(char) * 2);
	if (res == NULL)
		return (NULL);
	res[0] = '%';
	res[1] = '\0';
	return (res);
}

char	*ft_convert_pourcent(char *res)
{
	res = fill_res(res);
	if (res == NULL)
		return (NULL);
	return (res);
}
