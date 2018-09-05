# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmaake <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/26 10:25:53 by rmaake            #+#    #+#              #
#    Updated: 2017/08/09 16:06:50 by rmaake           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	make -C libft/ fclean && make -C libft/
	gcc -Wall -Werror -Wextra -I libft/  -c ft_*.c
	gcc -Wall -Werror -Wextra -I libft/ -o main.o -c main.c
	gcc -o lem-in main.o ft_*.o -I libft -L libft/ -lft

clean:
	rm -f main.o ft_*.o
	make -C libft/ clean

fclean: clean
	make -C libft/ fclean
	rm -f lem-in

re: fclean all
