/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:46:27 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/29 10:31:38 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	int c = argv[1][0];
	printf("isascii : %d\n",isascii(c));
	printf("ft_isascii : %d\n",ft_isascii(c));
}*/
