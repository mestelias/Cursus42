/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:48:40 by elmestou          #+#    #+#             */
/*   Updated: 2021/09/09 22:43:23 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	dest = s;
	while (i < n)
	{
		*(dest++) = 0;
		i++;
	}
}

/*int main(void)
{
        char str[50];
        char str2[50];
        strcpy(str, "This is string.h library function");
        strcpy(str2, "This is string.h library function");
        puts(str);
        ft_bzero(str, 3);
        bzero(str2, 3);
        puts(str+2);
        puts(str2+2);
        return (0);
}*/
