# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmaake <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/30 11:09:00 by rmaake            #+#    #+#              #
#    Updated: 2017/06/24 16:43:09 by rmaake           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -c -Wall -Wextra -Werror

SRCS = $(wildcard ./*.c)

OBJS = *.o

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc $(SRCS) $(CFLAGS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
