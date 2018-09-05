/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 10:38:30 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 15:28:57 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_mstrcmp(const char *b, int i, const char *s)
{
	int j;

	j = 0;
	while (b[i] != '\0' && s[j] != '\0')
	{
		if (b[i] == s[j])
		{
			i++;
			j++;
		}
		else
			return (b[i] - s[j]);
	}
	return (0);
}

char			*ft_strstr(const char *b_str, const char *s_str)
{
	char	*b_s;
	int		i;
	int		j;

	i = 0;
	b_s = (char *)b_str;
	if (ft_strlen(s_str) == 0)
		return (b_s);
	while (b_str[i] != '\0')
	{
		j = ft_mstrcmp(b_str, i, s_str);
		if (j != 0)
			i++;
		else
			return (&b_s[i]);
	}
	return (NULL);
}
