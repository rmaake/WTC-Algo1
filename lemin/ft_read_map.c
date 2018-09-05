/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 08:30:41 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/14 09:15:40 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

char	**ft_read_map(int fd)
{
	char	**t;
	char	*s;
	char	tmp[BUFF_SIZE];
	int		fd_r;

	s = (char *)malloc(sizeof(char));
	*s = '\0';
	while ((fd_r = read(fd, tmp, BUFF_SIZE)) != 0)
	{
		tmp[fd_r] = '\0';
		s = ft_strjoin(s, tmp);
	}
	t = ft_strsplit(s, '\n');
	free_str(s);
	if (t == NULL)
		return (NULL);
	return (t);
}
