/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:59:08 by rmaake            #+#    #+#             */
/*   Updated: 2017/07/17 16:00:04 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *newlst;
	t_list *nextlst;

	newlst = *alst;
	while (newlst)
	{
		nextlst = newlst->next;
		del(newlst->content, newlst->content_size);
		free(newlst);
		newlst = nextlst;
	}
	*alst = NULL;
}
