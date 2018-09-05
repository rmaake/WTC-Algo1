/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 09:32:42 by rmaake            #+#    #+#             */
/*   Updated: 2017/06/04 12:35:17 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*t;
	size_t	i;

	i = 0;
	t = (char *)malloc((size + 1) * sizeof(char));
	if (t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = '\0';
		i++;
	}
	t[i] = '\0';
	return (t);
}
