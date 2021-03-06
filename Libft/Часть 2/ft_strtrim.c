/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:09:00 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/28 14:09:07 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	new_len;
	char	*new_str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start ++;
	if (start == end)
		return (ft_strdup(""));
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	new_len = end - start;
	new_str = (char *)malloc(sizeof(char) * new_len + 1 );
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, &s1[start], new_len);
	new_str[new_len] = '\0';
	return (new_str);
}
