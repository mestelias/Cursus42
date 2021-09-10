/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:10:56 by elmestou          #+#    #+#             */
/*   Updated: 2021/09/08 14:07:29 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int main(int argc, char **argv)
{
(void)argc;
int c = argv[1][0];
printf("isdigit : %d\n",isdigit(c));
printf("ft_isdigit : %d\n",ft_isdigit(c));
}*/
