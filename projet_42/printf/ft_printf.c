/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:19:26 by elmestou          #+#    #+#             */
/*   Updated: 2022/01/07 19:26:21 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *form,  ...)
{
	t_data	data_list;
	va_list	list;
	int		i;

	va_start(list, form);
	i = 0;
	data_list.count = 0;
	while (form[i] != '\0')
	{
		if (form[i] == '%')
		{
			i++;
			set_data(&data_list);
			i = parse_conversion(&data_list, form, i);
			ft_convert_and_print(list, &data_list);
		}
		else
		{
			ft_putchar(form[i]);
			data_list.count++;
		}
		i++;
	}
	va_end(list);
	return (data_list.count);
}
