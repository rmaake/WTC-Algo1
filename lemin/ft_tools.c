/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 09:21:43 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/29 14:39:19 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	free_str(char *str)
{
	if (str != NULL)
		free(str);
}

void	free_t_str(char **t)
{
	int	i;

	i = -1;
	if (t != NULL)
	{
		while (t[++i] != NULL)
			free_str(t[i]);
		free(t);
	}
}

void	revert(t_link *lnk)
{
	int	i;

	i = 0;
	while (lnk[i].room1 != NULL && lnk[i].room2)
	{
		lnk[i].ch = 'f';
		i++;
	}
}

void	free_link(t_link *lnk)
{
	int	i;

	i = 0;
	while (lnk[i].room1 != NULL && lnk[i].room2 != NULL)
	{
		free(lnk[i].room1);
		free(lnk[i].room2);
		i++;
	}
	free(lnk);
}

void	free_path(t_path **pth)
{
	t_path	*tmp;
	t_path	*tmp2;

	tmp = *pth;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		free(tmp->path);
		free(tmp);
		tmp = tmp2;
	}
}
