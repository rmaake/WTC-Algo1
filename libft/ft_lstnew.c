/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 12:03:40 by rmaake            #+#    #+#             */
/*   Updated: 2017/06/09 12:52:30 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	char	*t;
	t_list	*l;

	t = (char *)content;
	l = (t_list *)malloc(sizeof(t_list));
	if (l == NULL)
		return (NULL);
	l->content = (void *)malloc(content_size + 1);
	if (l->content == NULL)
		return (NULL);
	if (content == NULL)
	{
		l->content = NULL;
		l->content_size = 0;
	}
	else
	{
		l->content = (void *)ft_strncpy(l->content, content, content_size);
		l->content_size = content_size;
	}
	l->next = NULL;
	return (l);
}
