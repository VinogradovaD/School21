/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:19:19 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/23 15:44:06 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

#define LIBFT_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef	unsigned long	size_t;
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *buf, int ch, size_t count);
void	ft_bzero(void *buf, size_t count);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr (const void *arr, int c, size_t n);
int		ft_memcmp(const void *buf1, const void *buf2, size_t count);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char 	**ft_split(char const *s, char c);
int     count(char const *str, char c);
void    *words_writing(char const *s, char **p, char c);
char    **ft_split(char const *s, char c);
int     is_space(char const *c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif
