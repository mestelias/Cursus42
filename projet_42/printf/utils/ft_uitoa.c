/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:13:16 by elmestou          #+#    #+#             */
/*   Updated: 2022/04/07 16:03:21 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_get_size_nbr(long nbr)
{
	int	count;

	if (nbr < 0)
	{
		count = 1;
		nbr *= -1;
	}
	else
		count = 0;
	while (nbr >= 10)
	{
		nbr /= 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len_str;
	long	nbr;

	nbr = n;
	len_str = ft_get_size_nbr(nbr);
	str = (char *)malloc(sizeof(char) * (len_str + 1));
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	str[len_str] = '\0';
	len_str--;
	while (nbr >= 10)
	{
		str[len_str] = (nbr % 10) + '0';
		nbr /= 10;
		len_str--;
	}
	str[len_str] = nbr + '0';
	return (str);
}
