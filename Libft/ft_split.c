/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:03:22 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/23 13:46:43 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char **ft_split(char const *s, char c)
{
    char **pointer;
    int words_count;

    words_count = count(s, c);
    if (words_count == 0)
        return (NULL);
    pointer = (char **)malloc(sizeof(char *) * (words_count + 1));
    if (!pointer)
        return (NULL);
    words_writing(s, pointer, c);
	return (pointer);

}

int  count(char const *s, char c)
{
    int count;
    int last;

    count = 0;
    last = 1;
    while (*s != '\0')
    {
        if (*s != c && is_space(s) == 0 && last == 1 )
        {
            count++;
            last = 0;
        }
        if ((*s == c || is_space(s) == 1) && last == 0 )
            last = 1;
        s++;

    }
    return (count);
}

void *words_writing(char const *s, char **p, char c)
{
    int count;
    int ip;
    int is;
    unsigned int start;

    ip = 0;
    is = 0;
    while (s[is])
    {
        if (s[is] == c || is_space(&s[is]) == 1)
            is++;
        start = is;
        count = 0;
        while (s[is] != c && is_space(&s[is]) == 0)
        {
            is++;
            count++;
        }
        p[ip] = ft_substr(s, start, count);
        ip++;
        is++;
    }
    p[ip] = (void *)0;
    return (p);
}

int is_space(char const *c)
{
    if (*c == ' ' || *c == '\t' || *c == '\n' || *c == '\v'
    || *c == '\f' || *c == '\r')
        return (1);
    return (0);
}
