/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_graph.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 15:57:39 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/28 09:32:25 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

static	void	ft_assign(char **r1, char **r2, char *room1, char *room2)
{
	if (room1 != NULL && room2 != NULL)
	{
		*r1 = ft_strdup(room1);
		*r2 = ft_strdup(room2);
	}
}

static int		get_size(char **t)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (t[i] != NULL)
	{
		if (ft_strchr(t[i], '-') != NULL)
			j++;
		i++;
	}
	return (j);
}

static	void	try_me(t_link *graph, char **t, int size)
{
	char	**s;
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (i < size)
	{
		if (ft_strchr(t[k], '-') != NULL)
		{
			s = ft_strsplit(t[k], '-');
			if (s != NULL)
			{
				ft_assign(&(graph[i].room1), &(graph[i].room2), s[0], s[1]);
				graph[i].ch = 'f';
			}
			i++;
		}
		k++;
	}
}

t_link			*ft_get_link(char **t)
{
	int		i;
	int		j;
	t_link	*graph;

	j = get_size(t);
	i = 0;
	graph = (t_link *)malloc(sizeof(t_link) * j + sizeof(t_link));
	if (graph == NULL)
		return (NULL);
	try_me(graph, t, j);
	graph[j].room1 = NULL;
	graph[j].room2 = NULL;
	graph[j].ch = 'f';
	free_t_str(t);
	return (graph);
}
