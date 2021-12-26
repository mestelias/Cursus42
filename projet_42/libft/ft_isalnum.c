/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:09:35 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/21 18:55:22 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
			|| (c >= 48 && c <= 57)))
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int main(int argc, char **argv)
{
(void)argc;
int c = argv[1][0];
printf("isalnum : %d\n",isalnum(c));
printf("ft_isalnum : %d\n",ft_isalnum(c));
}*/
