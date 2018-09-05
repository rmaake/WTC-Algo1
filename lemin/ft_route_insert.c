/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_route_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:24:50 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/30 14:35:58 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	ft_route_insert(t_route **list, t_route *newlst)
{
	if (!newlst)
		return ;
	if (!*list)
	{
		*list = newlst;
		return ;
	}
	newlst->next = *list;
	*list = newlst;
}
