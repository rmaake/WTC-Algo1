/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:43:54 by rmaake            #+#    #+#             */
/*   Updated: 2017/06/09 10:42:08 by rmaake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			*ft_memset(void *str, int c, size_t len);

void			ft_bzero(void *str, size_t n);

void			*ft_memcpy(void *dest, void const *src, size_t n);

void			*ft_memccpy(void *dst, void *src, int c, size_t n);

void			*ft_memmove(void *dst, void const *src, size_t len);

void			*ft_memchr(const void *str, int c, size_t n);

char			*ft_strdup(char *str);

int				ft_memcmp(void *str1, void *str2, size_t n);

size_t			ft_strlen(const char *str);

char			*ft_strcpy(char *dst, char *src);

char			*ft_strncpy(char *dst, char const *src, size_t n);

char			*ft_strcat(char *dst, char *src);

char			*ft_strncat(char *dst, char *src, int n);

size_t			ft_strlcat(char *dst, char *src, size_t size);

char			*ft_strchr(char *str, int c);

char			*ft_strrchr(char *str, int c);

char			*ft_strstr(char *b_str, char *s_str);

char			*ft_strnstr(char *b_str, char *s_str, size_t len);

int				ft_strcmp(char *str1, char *str2);

int				ft_strncmp(char *str1, char *str2, size_t n);

char			*ft_strsub(char *s, unsigned int start, size_t len);

int				ft_atoi(char *str);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

void			*ft_memalloc(size_t size);

void			ft_memdel(void **ap);

char			*ft_strnew(size_t size);

void			ft_strdel(char **as);

void			ft_strclr(char *s);

void			ft_striter(char *s, void (*f)(char *));

void			ft_striteri(char *s, void (*f)(unsigned int, char *));

char			*ft_strmap(char const *s, char (*f)(char));

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int				ft_strequ(char *s1, char *s2);

int				ft_strnequ(char *s1, char *s2, size_t n);

char			*ft_strdup(char *str);

char			*ft_strjoin(char *s1, char *s2);

char			*ft_strtrim(char *str);

char			**ft_strsplit(char const *s, char c);

char			*ft_itoa(int nbr);

void			ft_putchar(char c);

void			ft_putstr(char const *str);

void			ft_putendl(char const *str);

void			ft_putnbr(long nbr);

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char const *str, int fd);

void			ft_putendl_fd(char const *str, int fd);

void			ft_putnbr_fd(int nbr, int fd);

t_list			*ft_lstnew(void const *content, size_t content_size);

int				ft_printf(char *s, ...);
#endif
