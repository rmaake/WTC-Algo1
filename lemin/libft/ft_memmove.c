/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 13:47:43 by rmaake            #+#    #+#             */
/*   Updated: 2017/06/09 19:36:57 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;
	int		j;

	i = 0;
	j = len;
	d = (char *)dst;
	s = (char *)src;
	if (dst > src)
	{
		while (--j >= 0)
		{
			d[j] = s[j];
		}
	}
	else if (dst < src)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
