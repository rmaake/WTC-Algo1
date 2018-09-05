/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 10:30:19 by rmaake            #+#    #+#             */
/*   Updated: 2017/06/24 16:36:28 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft.h"

int		get_next_line(const int fd, char **line);
#endif
