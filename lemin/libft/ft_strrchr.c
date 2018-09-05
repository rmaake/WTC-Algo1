/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 10:23:50 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 15:24:03 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char		ch;
	char		*s;
	size_t		i;

	i = ft_strlen(str);
	ch = (int)c;
	s = (char *)str;
	while (i > 0)
	{
		if (str[i] == ch)
			return (&s[i]);
		i--;
	}
	if (str[i] == ch)
		return (&s[i]);
	return (NULL);
}
