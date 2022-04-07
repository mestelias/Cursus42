/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:44:24 by elmestou          #+#    #+#             */
/*   Updated: 2022/04/07 16:06:47 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*null_case(char *res)
{
	int		i;
	char	*str;
	int		len;

	str = ft_strdup("0x0");
	if (str == NULL)
		return (NULL);
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
	free(str);
	return (res);
}

static char	*casual_case(char *str, char *res)
{
	char	*s;
	int		i;
	int		len;

	s = ft_strjoin("0x", str);
	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	i = 0;
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	free(s);
	return (res);
}

char	*ft_convert_p(va_list list, char *res)
{
	char				*str;
	unsigned long int	nbr;

	nbr = va_arg(list, unsigned long int);
	str = ft_uitoa_base(nbr, "0123456789abcdef");
	if (nbr == 0)
		res = null_case(res);
	else
		res = casual_case(str, res);
	if (res == NULL)
		return (NULL);
	free(str);
	return (res);
}
