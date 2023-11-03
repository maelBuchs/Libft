/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 04:31:53 by asuc              #+#    #+#             */
/*   Updated: 2023/08/12 04:31:53 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);
char			**ft_split(char *str, char charset);
size_t			ft_strlen(const char *s);
char			*ft_strdup(char *src);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
int				ft_strncmp(char *s1, char *s2, size_t n);
int				ft_isdigit(char c);
int				ft_isalpha(char c);
int				ft_isalnum(char c);
int				ft_isascii(int c);
int				ft_isprint(char c);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *str, int fd);
char			*ft_itoa(int n);
int				ft_toupper(char c);
int				ft_tolower(char c);
void			ft_putendl_fd(char *s, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strchr(char *s, char c);
char			*ft_strrchr(char *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			*ft_memset(void *s, int c, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
void			*ft_memcpy(void *destination, const void *source, size_t size);
int				ft_memcmp(const void *pointer1,
					const void *pointer2, size_t size);
void			*ft_memchr(const void *memoryBlock,
					int searchedChar, size_t size);
void			*ft_memmove(void *dest, const void *src, size_t n);
char			*ft_strtrim(char const *str, char const *set);

#endif
