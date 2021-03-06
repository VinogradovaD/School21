/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:10:51 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/28 14:32:56 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *buf, size_t count)
{
	size_t	n;

	n = 0;
	while (n < count)
	{
		((char *)buf)[n] = '\0';
		n++;
	}
}
