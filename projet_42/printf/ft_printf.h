/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:57:07 by elmestou          #+#    #+#             */
/*   Updated: 2022/01/01 16:38:33 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_data_conversion
{
	char	conversion;
	int		count;
}	t_data;

// utils
char		*ft_itoa(int n);
void		ft_putchar(unsigned char c);
void		ft_putstr(char *str);
char		*ft_strdup(char *s);
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlen(const char *str);
char		*ft_uitoa(unsigned int n);
char		*ft_uitoa_base(unsigned long long int n, char *base);
char		*ft_uitoa_base_uppercase(unsigned long long int n, char *base);

//parsing
void		set_data(t_data *data_list);
int			parse_conversion(t_data *data_list, const char *form, int i);

#endif
