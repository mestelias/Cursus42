/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 16:30:30 by elmestou          #+#    #+#             */
/*   Updated: 2022/04/07 15:52:00 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	parse_conversion(t_data *data_list, const char *form, int i)
{
	data_list->conversion = form[i];
	return (i);
}
