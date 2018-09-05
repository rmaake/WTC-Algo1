/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 13:10:32 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 16:06:45 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		ch;
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	ch = (unsigned char)c;
	d = (unsigned char*)dst;
	s = (const unsigned char*)src;
	while (i < n)
	{
		if (s[i] == ch)
		{
			d[i] = s[i];
			return (&dst[i + 1]);
		}
		d[i] = s[i];
		i++;
	}
	return (NULL);
}
