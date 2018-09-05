/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 19:23:38 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/14 11:26:18 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	j = i;
	if (size == 0)
		return (ft_strlen(dst));
	while ((src[i - j] != '\0') && (i < size - 1))
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < size)
		dst[i] = '\0';
	k = ft_strlen(src);
	return (k + j);
}
