/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:17:00 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 15:09:35 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*strc;
	int		i;

	i = 0;
	strc = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	if (strc != NULL)
	{
		while (str[i] != '\0')
		{
			strc[i] = str[i];
			i++;
		}
		strc[i] = '\0';
		return (strc);
	}
	else
		return (NULL);
}
