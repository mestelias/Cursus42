/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:10:33 by elmestou          #+#    #+#             */
/*   Updated: 2021/09/08 13:26:09 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int main(int argc, char **argv)
{
        (void)argc;
        int c = argv[1][0];
        printf("isalpha : %d\n", isalpha(c));
        printf("ft_isalpha : %d\n", ft_isalpha(c));
}*/
