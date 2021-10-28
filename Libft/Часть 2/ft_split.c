/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:06:12 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/28 14:37:52 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**words_writing(char const *s, char **p, char c, int words_count)
{
	int	count;
	int	ip;
	int	is;

	ip = 0;
	is = 0;
	while (ip < words_count)
	{
		while (s[is] == c)
			is++;
		count = 0;
		while (s[is + count] != c && s[is + count] != '\0')
			count++;
		p[ip] = ft_substr(s, is, count);
		if (!p[ip])
		{
			while (--ip >= 0)
				free(p[ip]);
			free (p);
		}
		ip++;
		is += count;
	}
	p[ip] = (void *)0;
	return (p);
}

int	count(char const *s, char del)
{
	int	count;
	int	last_is_del;

	count = 0;
	last_is_del = 1;
	while (*s != '\0')
	{
		if (*s != del && last_is_del == 1 )
		{
			count++;
			last_is_del = 0;
		}
		if (*s == del && last_is_del == 0 )
			last_is_del = 1;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**pointer;
	int		words_count;

	if (!s)
		return (NULL);
	words_count = count(s, c);
	pointer = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!pointer)
		return (NULL);
	pointer = words_writing(s, pointer, c, words_count);
	return (pointer);
}
