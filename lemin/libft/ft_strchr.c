/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 10:08:51 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 15:21:05 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	char	ch;
	char	*s;
	int		i;

	ch = (char)c;
	s = (char *)str;
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] == ch)
			return (&s[i]);
	}
	if (str[i] == ch)
		return (&s[i]);
	return (NULL);
}
