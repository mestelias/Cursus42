/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:35:04 by elmestou          #+#    #+#             */
/*   Updated: 2022/04/07 16:10:07 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_convert_and_print(va_list list, t_data *data_list)
{
	char	*res;

	res = NULL;
	if (data_list->conversion == 's')
		res = ft_convert_s(list, res);
	else if (data_list->conversion == 'c')
		res = ft_convert_c(list, data_list, res);
	else if (data_list->conversion == 'x' || data_list->conversion == 'X')
		res = ft_convert_x(list, data_list, res);
	else if (data_list->conversion == '%')
		res = ft_convert_pourcent(res);
	else if (data_list->conversion == 'p')
		res = ft_convert_p(list, res);
	else if (data_list->conversion == 'd' || data_list->conversion == 'i')
		res = ft_convert_d_i(list, res);
	else if (data_list->conversion == 'u')
		res = ft_convert_u(list, res);
	if (res == NULL)
		data_list->count = -1;
	else
		data_list->count += ft_strlen(res);
	ft_putstr(res);
	free(res);
	return (1);
}
