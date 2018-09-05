/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 12:32:34 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 16:29:42 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	size_t		ft_get_s(char const *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		else
			return (i);
	}
	return (0);
}

static	size_t		ft_get_e(char const *str)
{
	size_t i;
	size_t j;

	j = 0;
	i = ft_strlen(str) - 1;
	if (str[j] == '\0')
		return (0);
	while (i > j)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i--;
		else
			return (i);
	}
	return (0);
}

static	void		ft_assign(size_t s, size_t e, char *dst, char const *src)
{
	size_t i;

	i = 0;
	if (src[i] == '\0')
		dst[i] = src[i];
	if (e == 0)
	{
		if (src[i] == '\n' || src[i] == '\t' || src[i] == ' ')
		{
			dst[i] = '\0';
			return ;
		}
	}
	while (s <= e)
	{
		dst[i] = src[s];
		s++;
		i++;
	}
	dst[i] = '\0';
}

char				*ft_strtrim(char const *str)
{
	char	*t;
	size_t	i;
	size_t	s;
	size_t	e;

	i = 0;
	if (str == NULL)
		return (NULL);
	s = ft_get_s(str);
	e = ft_get_e(str);
	t = (char *)malloc((e - s + 2) * sizeof(char));
	if (t == NULL)
		return (NULL);
	ft_assign(s, e, t, str);
	return (t);
}
