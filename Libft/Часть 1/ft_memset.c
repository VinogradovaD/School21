/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:25:40 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/28 14:32:38 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t	n;

	n = 0;
	while (n < count)
	{
		((char *)buf)[n] = (char)ch;
		n++;
	}
	return (buf);
}
