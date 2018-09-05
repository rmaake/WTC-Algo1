/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 12:21:20 by rmaake            #+#    #+#             */
/*   Updated: 2017/06/07 14:00:24 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	char	ch;
	char	*t;
	size_t	i;

	i = 0;
	t = (char *)str;
	if (c < 0)
	{
		c = c * -1;
	}
	ch = c;
	while (i < len)
	{
		t[i] = ch;
		i++;
	}
	return (str);
}
