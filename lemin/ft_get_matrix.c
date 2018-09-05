/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 09:28:35 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/30 14:40:29 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

static void		back_track(char **head)
{
	char	*last;

	if (!(last = ft_strrchr(*head, '-')))
	{
		*head = NULL;
		return ;
	}
	*head = ft_strsub(*head, 0, ft_strrchr(*head, '-') - *head);
}

static void		add_route(char **head, char *room)
{
	char	*temp;
	char	*news;

	if (!*head)
	{
		*head = ft_strdup(room);
		return ;
	}
	temp = *head;
	news = ft_strjoin(temp, "-");
	news = ft_strjoin(news, room);
	*head = news;
}

static int		try_me(t_path **lst, char *st, char *en, char **history)
{
	if (ft_strcmp(st, en) == 0)
	{
		ft_path_insert(lst, ft_path(*history));
		back_track(history);
		return (0);
	}
	return (1);
}

static void		try_this(t_link *lnk, char *st, char *en, t_path **lst)
{
	int			i;
	static char	*history = NULL;

	i = -1;
	add_route(&history, st);
	if (try_me(lst, st, en, &history) == 0)
		return ;
	while (lnk[++i].room1 != NULL)
	{
		if (ft_strcmp(st, lnk[i].room1) == 0 && lnk[i].ch == 'f')
		{
			if (ft_strcmp(lnk[i].room2, en) != 0)
				lnk[i].ch = 't';
			try_this(lnk, lnk[i].room2, en, lst);
		}
		else if (ft_strcmp(st, lnk[i].room2) == 0 && lnk[i].ch == 'f')
		{
			if (ft_strcmp(lnk[i].room1, en) != 0)
				lnk[i].ch = 't';
			try_this(lnk, lnk[i].room1, en, lst);
		}
	}
	back_track(&history);
}

t_path			*ft_get_paths(t_link *lnk, t_data dt)
{
	int		i;
	t_path	*lst;

	i = -1;
	if (lnk == NULL)
		return (NULL);
	lst = NULL;
	while (lnk[++i].room1 != NULL)
	{
		if (ft_strcmp(lnk[i].room1, dt.start) == 0)
		{
			lnk[i].ch = 't';
			try_this(lnk, lnk[i].room2, dt.end, &lst);
		}
		else if (ft_strcmp(lnk[i].room2, dt.start) == 0)
		{
			lnk[i].ch = 't';
			try_this(lnk, lnk[i].room1, dt.end, &lst);
		}
		revert(lnk);
	}
	free_link(lnk);
	return (lst);
}
