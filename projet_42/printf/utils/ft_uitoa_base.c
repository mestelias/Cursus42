/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 15:17:02 by elmestou          #+#    #+#             */
/*   Updated: 2022/03/25 14:55:24 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_get_size_nbr(unsigned long int nbr, int base_len)
{
	int		i;

	i = 0;
	while (nbr > 0)
	{
		nbr /= base_len;
		i++;
	}
	return (i);
}

static char	place_in_base(unsigned long int nbr, int len_base)
{
	if (nbr % len_base >= 10)
		return ((nbr % len_base) - 10 + 'a');
	else
		return ((nbr % len_base) + '0');
}

char	*ft_uitoa_base(unsigned long int n, char *base)
{
	char				*str;
	int					len_str;
	int					len_base;
	unsigned long int	nbr;

	len_base = ft_strlen(base);
	if (len_base == 10)
		return (ft_itoa(n));
	if (len_base < 2 || len_base > 16)
		return (NULL);
	nbr = n;
	len_str = ft_get_size_nbr(nbr, len_base);
	str = (char *)malloc(sizeof(char) * (len_str + 1));
	if (str == NULL)
		return (NULL);
	str[len_str] = '\0';
	len_str--;
	while (len_str >= 0)
	{
		str[len_str] = place_in_base(nbr, len_base);
		nbr /= len_base;
		len_str--;
	}
	return (str);
}
