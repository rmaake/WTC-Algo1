/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 08:39:46 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 16:17:58 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char*)malloc(size);
	if (mem == NULL)
		return (NULL);
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}
