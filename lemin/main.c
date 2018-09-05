/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 09:10:31 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/30 15:04:05 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

static void	set_values(t_data *dt)
{
	dt->start = NULL;
	dt->end = NULL;
	dt->ants = -1;
}

static void	print_err()
{
	ft_putstr("ERROR\n");
	exit(1);
}
int			main(void)
{
	char	**t;
	int		i;
	t_data	dt;
	t_path	*pth;

	t = ft_read_map(0);
	if (*t == NULL)
		print_err();
	set_values(&dt);
	ft_get_data(t, &dt);
	i = -1;
	while (t[++i] != NULL)
		ft_putendl(t[i]);
	if (dt.start == NULL || dt.end == NULL || dt.ants <= 0)
		print_err();
	if (!(pth = ft_get_paths(ft_get_link(t), dt)))
		print_err();
	ft_get_route(&pth, &dt);
}
