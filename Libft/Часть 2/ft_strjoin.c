/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:07:53 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/28 14:08:02 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*new_str;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
		len1 = ft_strlen(s1);
	if (s2 != NULL)
		len2 = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s1, len1);
	ft_memcpy(&new_str[len1], s2, len2);
	new_str[len1 + len2] = '\0';
	return (new_str);
}
