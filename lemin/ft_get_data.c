/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:12:32 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/28 09:21:23 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

static int	get_ants(char **t, t_data *data)
{
	int	j;

	j = 0;
	while (t[0][j] != '\0')
	{
		if (ft_isdigit(t[0][j++]) != 1)
			return (-1);
	}
	t[0][j] = '\0';
	data->ants = ft_atoi(t[0]);
	return (1);
}

static char	*set_data(char *src, char *dst)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (src[i] != '\0' && src[i] != ' ')
		i++;
	if (i > 0)
	{
		dst = (char *)malloc(sizeof(char) * i + sizeof(char));
		if (dst == NULL)
			return (NULL);
		while (++j < i)
			dst[j] = src[j];
		dst[i] = '\0';
		return (dst);
	}
	return (NULL);
}

static void	get_start_end(char **t, t_data *data)
{
	int	i;

	i = 0;
	while (t[i] != NULL && t[i + 1] != NULL)
	{
		if (ft_strcmp("##start", t[i]) == 0)
			data->start = set_data(t[i + 1], data->start);
		if (ft_strcmp("##end", t[i]) == 0)
			data->end = set_data(t[i + 1], data->end);
		i++;
	}
}

void		ft_get_data(char **t, t_data *data)
{
	get_ants(t, data);
	get_start_end(t, data);
}
