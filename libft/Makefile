# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmaake <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/30 11:09:00 by rmaake            #+#    #+#              #
#    Updated: 2017/07/17 16:10:41 by rmaake           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -c -Wall -Wextra -Werror

SRCS = ft_memalloc.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memccpy.c\
	   ft_memcmp.c ft_memdel.c ft_memset.c ft_isalnum.c ft_isascii.c ft_itoa.c\
	   ft_isprint.c ft_isalpha.c ft_isdigit.c ft_tolower.c ft_toupper.c\
	   ft_putchar.c ft_putendl.c ft_putnbr.c ft_putstr.c ft_putchar_fd.c\
	   ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
	   ft_strcat.c ft_strdup.c ft_strlen.c ft_strnequ.c ft_strsub.c ft_strchr.c\
	   ft_strequ.c ft_strmap.c ft_strnew.c ft_strtrim.c ft_strclr.c ft_striter.c\
	   ft_strmapi.c ft_strnstr.c ft_strcmp.c ft_striteri.c ft_strncat.c\
	   ft_strrchr.c ft_strcpy.c ft_strjoin.c ft_strncmp.c ft_strsplit.c\
	   ft_strdel.c ft_strlcat.c ft_strncpy.c ft_strstr.c ft_atoi.c ft_bzero.c\
	   ft_lstdelone.c ft_lstnew.c ft_lstmap.c ft_lstdel.c ft_lstiter.c ft_lstadd.c

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
