/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 11:43:54 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 16:27:30 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*sut;
	size_t			i;
	unsigned int	i_s;

	i = 0;
	i_s = start;
	if (s == NULL)
		return (NULL);
	sut = (char *)malloc((len + 1) * sizeof(char));
	if (sut == NULL)
		return (NULL);
	while (i < len)
	{
		sut[i] = s[start];
		i++;
		start++;
	}
	sut[i] = '\0';
	return (sut);
}
