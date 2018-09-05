/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:21:33 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/14 11:04:45 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b_str, const char *s_str, size_t len)
{
	char	*b_s;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	b_s = (char *)b_str;
	if (ft_strlen(s_str) == 0)
		return (b_s);
	while (s_str[i] != '\0' && b_str[j] != '\0' && j < len)
	{
		if (s_str[i] == b_str[j])
			i++;
		else
			i = 0;
		j++;
	}
	if (i < ft_strlen(s_str))
		return (NULL);
	return (&b_s[j - i]);
}
