/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:51:39 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/16 15:49:55 by clockhar         ###   ########.fr       */
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
