/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 10:06:07 by rmaake            #+#    #+#             */
/*   Updated: 2017/08/11 15:31:30 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_line_break(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == '\n')
			return (i);
	}
	return (-1);
}

char		*try_me(char *temp, char **str)
{
	char *temp2;

	temp[1] = '\0';
	temp2 = ft_strjoin(*str, temp);
	free(*str);
	*str = temp2;
	return (temp2);
}

char		*get_read(int *fd, char **str, char temp[], int buff)
{
	char	*temp2;
	int		fd_r;

	*str = (char *)malloc(sizeof(char));
	**str = '\0';
	while (get_line_break(temp) < 0)
	{
		fd_r = (BUFF_SIZE > 1) ? read(*fd, temp, BUFF_SIZE / buff) :
			read(*fd, temp, BUFF_SIZE);
		if (fd_r > 0)
			temp2 = try_me(temp, str);
		if (fd_r == 0)
		{
			*fd = fd_r;
			return (temp2);
		}
		if (fd_r < 0)
			return (NULL);
	}
	*fd = fd_r;
	temp2[ft_strlen(temp2) - 1] = '\0';
	return (temp2);
}

int			get_next_line(const int fd, char **line)
{
	char		*get_l;
	char		temp[2];
	static int	fd_r;
	int			buff;

	get_l = NULL;
	fd_r = fd;
	buff = BUFF_SIZE;
	temp[0] = 'z';
	if (line == NULL || fd < 0)
		return (-1);
	*line = get_read(&fd_r, &get_l, temp, buff);
	if (*line == NULL || fd_r < 0)
		return (-1);
	if (fd_r == 0)
		return (0);
	return (1);
}
