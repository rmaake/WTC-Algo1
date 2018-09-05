/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:44:58 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/29 08:50:45 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	ft_path_insert(t_path **list, t_path *newlst)
{
	t_path *current;
	t_path *previous;

	if (newlst == NULL)
		return ;
	previous = NULL;
	current = *list;
	while (current != NULL)
	{
		previous = current;
		current = current->next;
	}
	if (previous == NULL)
	{
		newlst->next = *list;
		*list = newlst;
	}
	else
	{
		previous->next = newlst;
		newlst->next = current;
	}
}
