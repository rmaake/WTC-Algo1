/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_route.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:22:24 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/30 13:52:47 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

t_route	*ft_route(char *str)
{
	t_route *new;

	new = (t_route *)malloc(sizeof(t_route));
	if (new == NULL)
		return (NULL);
	new->room = ft_strdup(str);
	new->ant = 0;
	new->ch = 'e';
	new->start = 0;
	new->next = NULL;
	return (new);
}
