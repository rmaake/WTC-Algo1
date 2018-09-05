/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 13:56:29 by rmaake            #+#    #+#             */
/*   Updated: 2017/06/07 14:16:03 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	ch;
	size_t			i;

	i = 0;
	s = (unsigned char*)str;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == ch)
		{
			return ((void *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
