/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:58:57 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 15:37:06 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	total;

	i = -1;
	sign = 1;
	total = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == '-' && ft_isdigit(str[i + 1]) == 1)
			sign = -1;
		else if (ft_isdigit(str[i]) == 1)
			total = total * 10 + (str[i] - '0');
		else if (ft_isdigit(str[i]) == 0 && ft_isdigit(str[i - 1] == 1))
			return ((int)total * sign);
		else if (str[i] == '-' && ft_isdigit(str[i + 1]) == 0)
			return (0);
		if (total < LONG_MIN)
			return (-1);
		if (total > LONG_MAX || str[i] == '\e')
			return (0);
	}
	return ((int)total * sign);
}
