/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:54:32 by elmestou          #+#    #+#             */
/*   Updated: 2021/09/09 23:16:40 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)dest;
	while (i < n)
	{
		*(char *)str = *(char *)src;
		str++;
		src++;
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char src[50] = "mahmudulhasanjony";
	char dest[50];
	char c = 'n';
	char *ret;

	ft_memcpy(dest, src, 5);
	printf("%s", dest);
	return (0);
}*/
