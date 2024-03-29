/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmestou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:34:59 by elmestou          #+#    #+#             */
/*   Updated: 2022/04/12 16:56:47 by elmestou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen( char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*freebuff(char *pos_buff)
{
	free(pos_buff);
	return (NULL);
}

char	*cut_str(char *pos_buff, char **str)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (pos_buff[i] && pos_buff[i] != '\n')
		i++;
	*str = ft_substr(pos_buff, 0, i + 1);
	if (!str)
		return (freebuff(pos_buff));
	if (pos_buff[i + 1])
	{
		tmp = ft_substr(pos_buff, i + 1, ft_strlen(pos_buff) - (i + 1));
		if (!tmp)
			return (freebuff(pos_buff));
		free(pos_buff);
		pos_buff = tmp;
	}
	else
		return (freebuff(pos_buff));
	return (pos_buff);
}

char	*check_read(char *str, char **pos_buff, char **buff)
{
	freebuff(*buff);
	str = ft_strdup(*pos_buff);
	free(*pos_buff);
	*pos_buff = NULL;
	return (str);
}

char	*get_next_line(int fd)
{
	char		*str;
	char		*tmp;
	static char	*pos_buff = NULL;
	char		*buff;
	int			c;

	str = NULL;
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || BUFFER_SIZE <= 0 || buff == NULL)
		return (freebuff(buff));
	while (!ft_strchr(pos_buff, '\n'))
	{
		c = read(fd, buff, BUFFER_SIZE);
		if (c == -1)
			return (freebuff(buff));
		else if (c == 0)
			return (check_read(str, &pos_buff, &buff));
		buff[c] = '\0';
		tmp = pos_buff;
		pos_buff = ft_strjoin(pos_buff, buff);
		free(tmp);
	}
	free(buff);
	pos_buff = cut_str(pos_buff, &str);
	return (str);
}
