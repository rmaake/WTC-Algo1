/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 11:41:37 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 16:34:07 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(long nbr, int fd)
{
	char c;

	c = '0';
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
	{
		c = c + nbr;
		write(fd, &c, 1);
	}
}
