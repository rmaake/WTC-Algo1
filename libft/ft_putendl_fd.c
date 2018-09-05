/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 11:38:58 by rmaake            #+#    #+#             */
/*   Updated: 2017/06/09 18:34:17 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char const *str, int fd)
{
	size_t i;

	i = 0;
	if (str == NULL)
		return ;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
