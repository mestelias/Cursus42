/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:14:15 by elmestou          #+#    #+#             */
/*   Updated: 2022/03/21 15:07:11 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*fill_res(char *str, char *res)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	i = 0;
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

char	*ft_convert_u(va_list list, char *res)
{
	char			*str;
	unsigned int	nbr;

	nbr = va_arg(list, unsigned int);
	str = ft_uitoa(nbr);
	res = fill_res(str, res);
	free(str);
	if (res == NULL)
		return (NULL);
	return (res);
}
