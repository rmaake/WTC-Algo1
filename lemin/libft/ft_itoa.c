/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 13:42:37 by rmaake            #+#    #+#             */
/*   Updated: 2017/06/06 11:34:12 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static	int		ft_gets(int nbr)
{
	int i;

	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

static	void	ft_assign(char *s, int i, char c)
{
	s[i] = c;
}

static	void	ft_putnbr_mem(long int nbr, char *s, int *i)
{
	char	c;

	if (nbr < 0)
	{
		c = '-';
		s[0] = '-';
		nbr = nbr * -1;
		*i = *i + 1;
	}
	if (nbr >= 10)
	{
		ft_putnbr_mem(nbr / 10, s, i);
		ft_putnbr_mem(nbr % 10, s, i);
	}
	else
	{
		c = '0' + nbr;
		ft_assign(s, *i, c);
		*i = *i + 1;
	}
}

char			*ft_itoa(int nbr)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)malloc(ft_gets(nbr) + 2);
	if (s == NULL)
		return (NULL);
	ft_putnbr_mem(nbr, s, &i);
	s[i] = '\0';
	return (s);
}
