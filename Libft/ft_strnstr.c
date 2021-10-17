/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:03:06 by                   #+#    #+#             */
/*   Updated: 2021/10/17 18:24:31 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t ans;
	size_t i;

	ans = 0;
	if (needle == (void *)0)
		return ((char *)haystack);
	while (haystack[ans] != '\0' && ans < len)
	{
		i = 1;
		if (haystack[ans] == needle[0])
		{
			while (haystack[ans + i] == needle[i] && needle[i] != '\0' &&
			(ans + i) < len)
				i++;
			if (*needle == '\0')
				return 0;
		}
		ans++;
	}
	return (0);
}