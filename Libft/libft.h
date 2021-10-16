/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:19:19 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/16 17:11:35 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>

typedef	unsigned long size_t;
int    ft_isalpha(int ch);
int	   ft_isdigit(int ch);
int	   ft_isalnum(int ch);
int	   ft_isascii(int ch);
int	   ft_isprint(int ch);
size_t ft_strlen(const char *s);
void   *ft_memset(void *buf, int ch, size_t count);
void   ft_bzero(void *buf, size_t count);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void   *ft_memmove(void *restrict dst, const void *restrict src, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t
dstsize);

int    ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);

#endif
