/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 08:17:44 by rmaake            #+#    #+#             */
/*   Updated: 2017/11/30 14:34:47 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_H
# define LEM_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <stdio.h>
# include "libft.h"

# define BUFF_SIZE 32

typedef struct	s_link
{
	char	*room1;
	char	*room2;
	char	ch;
}				t_link;

typedef struct	s_data
{
	char	*start;
	char	*end;
	int		ants;
}				t_data;

typedef struct	s_path
{
	char			*path;
	struct s_path	*next;
}				t_path;

typedef struct	s_route
{
	char			*room;
	char			ch;
	int				ant;
	int				start;
	struct s_route	*next;
}				t_route;

char			**ft_read_map(int fd);

t_link			*ft_get_link(char **t);

t_path			*ft_path(char *str);

t_route			*ft_route(char *str);

t_path			*ft_get_paths(t_link *lnk, t_data dt);

void			ft_move_ants(t_route **rt, t_data *dt);

void			ft_get_route(t_path **pth, t_data *dt);

void			ft_get_data(char **t, t_data *dt);

void			ft_path_insert(t_path **lst, t_path *new);

void			ft_route_insert(t_route **rte, t_route *new);

void			free_str(char *str);

void			free_t_str(char **t);

void			free_link(t_link *lnk);

void			free_path(t_path **pth);

void			free_route(t_route **rt);

void			free_data(t_data *dt);

void			revert(t_link *lnk);

#endif
