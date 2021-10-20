/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:09:20 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/20 15:19:22 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*ans;

	ans = (void *)0;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			ans = str;
		str++;
	}
	if (c == '\0')
		return (str);
	return (ans);
}
