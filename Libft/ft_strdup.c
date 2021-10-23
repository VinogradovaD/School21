/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:03:52 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/20 15:15:07 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str_dup;
	char	*pointer;
	int		len;

	len = ft_strlen(str);
	str_dup = malloc(sizeof(char) * len + 1);
	pointer = str_dup;
	if (!str_dup)
		return (0);
	while (*str)
	{
		*str_dup = *str;
		str_dup++;
		str++;
	}
	*str_dup = '\0';
	return (pointer);
}
