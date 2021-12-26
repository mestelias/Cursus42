/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 16:40:07 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/25 16:52:05 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	convert(char *str, int nbr, int i)
{
	i--;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		nbr;
	char	*str;

	i = 0;
	nbr = n;
	if (n == -2147483648)
		return ("-2147483648");
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (n < 0)
		str[0] = '-';
	str[i] = '\0';
	convert(str, n, i);
	return (str);
}
