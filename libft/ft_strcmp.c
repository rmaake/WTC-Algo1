/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:41:10 by rmaake            #+#    #+#             */
/*   Updated: 2017/09/13 15:33:21 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *str1, const char *str2)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	i = 0;
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
