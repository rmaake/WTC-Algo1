/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_route.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 13:26:52 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/30 14:44:17 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

static int		length(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	return (j);
}

static char		*route(t_path **pth, int i)
{
	t_path	*tmp;
	int		j;

	j = 0;
	tmp = *pth;
	while (tmp != NULL)
	{
		if (i == j)
			return (tmp->path);
		j++;
		tmp = tmp->next;
	}
	return (tmp->path);
}

static char		**find_route(t_path **pth)
{
	int		i;
	int		j;
	int		k;
	t_path	*tmp;

	i = 0;
	j = 0;
	k = 0;
	tmp = *pth;
	while (tmp != NULL)
	{
		if (j == 0)
			j = length(tmp->path);
		if (j > length(tmp->path))
		{
			j = length(tmp->path);
			k = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (ft_strsplit(route(pth, k), '-'));
}

void			ft_get_route(t_path **pth, t_data *dt)
{
	char	**rt;
	t_route	*rte;
	int		i;

	rt = find_route(pth);
	i = -1;
	rte = NULL;
	ft_route_insert(&rte, ft_route(dt->start));
	rte->start = 1;
	rte->ch = 'f';
	while (rt[++i] != NULL)
		ft_route_insert(&rte, ft_route(rt[i]));
	free_path(pth);
	free_t_str(rt);
	ft_move_ants(&rte, dt);
}
