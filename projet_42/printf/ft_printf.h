/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:57:07 by elmestou          #+#    #+#             */
/*   Updated: 2022/04/07 15:50:30 by elmestou         ###   ########.fr       */
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

int		ft_printf(const char *form, ...);

//display
int		ft_convert_and_print(va_list list, t_data *data_list);
char	*ft_convert_pourcent(char *res);
char	*ft_convert_u(va_list list, char *res);
char	*ft_convert_d_i(va_list list, char *res);
char	*ft_convert_c(va_list list, t_data *data_list, char	*res);
char	*ft_convert_x(va_list list, t_data *data_list, char *res);
char	*ft_convert_p(va_list list, char *res);
char	*ft_convert_s(va_list list, char *res);

// utils
char	*ft_itoa(int n);
void	ft_putchar(unsigned char c);
void	ft_putstr(char *str);
char	*ft_strdup(char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_uitoa(unsigned int n);
char	*ft_uitoa_base(unsigned long int n, char *base);
char	*ft_uitoa_base_uppercase(unsigned long long int n, char *base);

//parsing
void	set_data(t_data *data_list);
int		parse_conversion(t_data *data_list, const char *form, int i);

#endif
