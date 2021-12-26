/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:03:52 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/21 18:54:16 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_atoi(char *str)
{
	int		res;
	int		i;
	int		sign;

	sign = 1;
	res = 0;
	i = 0;
	if (str[i])
	{
		sign = -sign;
		i++;
	}
	while (str[i] != '\0')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}
