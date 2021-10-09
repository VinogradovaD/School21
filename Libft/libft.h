#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
typedef unsigned long size_t;
int	ft_isalpha(int ch);
int	ft_isdigit(int ch);
int	ft_isalnum(int ch);
int	ft_isascii(int ch);
int	ft_isprint(int ch);
size_t	strlen(const char *s);
void	*ft_memset(void *buf, int ch, size_t count);

#endif