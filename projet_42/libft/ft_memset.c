/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <elmestou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 00:37:49 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/21 18:57:42 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	dest = (unsigned char *)s;
	while (i <= n)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	test[20];
	char	test1[20];
	int		i;

	for (i = 0; i < 20; i++)
		printf("Before memset : %d\n", test[i]);
	ft_memset(test, 300, 20);
	memset(test1, 300, 20);
	for (i = 0; i < 20; i++)
		printf("Ft_memset : %d <---> memset : %d\n", test[i], test1[i]);
	return (0);
}*/
