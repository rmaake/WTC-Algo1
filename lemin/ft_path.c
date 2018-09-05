/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:44:44 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/29 11:37:12 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

t_path	*ft_path(char *str)
{
	t_path *new;

	new = (t_path *)malloc(sizeof(t_path));
	if (new == NULL)
		return (NULL);
	new->path = ft_strdup(str);
	new->next = NULL;
	return (new);
}
