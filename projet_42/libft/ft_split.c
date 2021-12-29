/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 16:53:22 by elmestou          #+#    #+#             */
/*   Updated: 2021/12/29 10:35:09 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cmptword(const char	*s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c) && (i == 0 || s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

char	*cmptchar(const char	*s, char c)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] && (s[i] != c))
		i++;
	p = malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	while (j < i)
	{
		p[j] = s[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		j;
	int		x;

	i = 0;
	x = 0;
	j = cmptword(s, c);
	p = malloc(sizeof(char *) * (cmptword(s, c) + 1));
	if (!p)
		return (NULL);
	while (i < j)
	{
		while (s[x] && s[x] == c)
			x++;
		if ((s[x] != c) && (x == 0 || s[x - 1] == c))
			p[i] = cmptchar((s + x), c);
		x += ft_strlen(p[i]);
		i++;
	}
	p[i] = NULL;
	return (p);
}
