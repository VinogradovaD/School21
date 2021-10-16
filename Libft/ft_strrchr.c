/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:09:20 by                   #+#    #+#             */
/*   Updated: 2021/10/16 18:18:06 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *str;
	char *ans;

	ans = (void *)0;
	str = (char*)s;
	while(*str != '\0')
	{
		if (*str == c)
			ans = str;
		str++;
	}
	if (c == '\0')
		return str;
	return (ans);
}