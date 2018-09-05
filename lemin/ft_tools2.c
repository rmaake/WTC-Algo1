/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:29:27 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/30 14:33:46 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	free_route(t_route **rt)
{
	t_route	*tmp;
	t_route	*tmp2;

	tmp = *rt;
	tmp2 = tmp->next;
	while (tmp2 != NULL)
	{
		free(tmp->room);
		free(tmp);
		tmp = tmp2;
		tmp2 = tmp2->next;
	}
	free(tmp->room);
	free(tmp);
}

void	free_data(t_data *dt)
{
	if (dt->start != NULL)
		free(dt->start);
	if (dt->end != NULL)
		free(dt->end);
}
