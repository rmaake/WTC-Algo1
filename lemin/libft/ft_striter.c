/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 09:55:04 by rmaake            #+#    #+#             */
/*   Updated: 2017/06/09 10:46:05 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}
