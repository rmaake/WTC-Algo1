/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 10:17:24 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/14 10:36:47 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_size_word(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (0);
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			j++;
		else if (s[i] != c && s[i - 1] == c)
			j++;
		i++;
	}
	return (j);
}

static void		assign_word(char const *s, char **t, char c, int j)
{
	int	i;
	int	k;
	int l;

	i = -1;
	l = 0;
	while (++i < j)
	{
		while (s[l] == c)
			l++;
		k = 0;
		while (s[l] != c && s[l] != '\0')
		{
			k++;
			l++;
		}
		t[i] = ft_strsub(&s[l - k], 0, k);
	}
	t[i] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		j;

	j = get_size_word(s, c);
	t = (char**)malloc(sizeof(char *) * j + sizeof(char *));
	if (t == NULL)
		return (NULL);
	assign_word(s, t, c, j);
	return (t);
}
