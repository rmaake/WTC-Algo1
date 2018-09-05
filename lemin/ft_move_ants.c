/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_ants.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:43:19 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/30 14:52:47 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

static void		print_st(char *room, int ant)
{
	write(1, "L", 1);
	ft_putnbr(ant);
	write(1, "-", 1);
	ft_putstr(room);
	write(1, " ", 1);
}

static void		try_this(t_route *move, t_data *dt)
{
	static int	next_num = 1;

	if (move->next->start && next_num <= dt->ants)
		move->ant = next_num++;
	else
		move->ant = move->next->ant;
	if (!move->next->start)
		move->next->ch = 'e';
	move->ch = 'f';
	if (move->ant)
		print_st(move->room, move->ant);
}

static void		try_me(t_route *move, int *ants)
{
	*ants = *ants - 1;
	if (!(*ants))
		return ;
	move->ant = move->next->ant;
	move->next->ch = 'e';
	print_st(move->room, move->ant);
}

void			ft_move_ants(t_route **rt, t_data *dt)
{
	int			ants;
	t_route		*move;

	if (!(move = *rt))
		return ;
	ants = dt->ants;
	ft_putchar('\n');
	while (ants > 0)
	{
		move = *rt;
		while (move)
		{
			if (move->ch == 'e' && move->next && move->next->ch == 'f')
				try_this(move, dt);
			else if (move->ch == 'f' && ft_strequ(move->room, dt->end))
				try_me(move, &ants);
			move = move->next;
		}
		ft_putchar('\n');
	}
	free_route(rt);
	free_data(dt);
}
