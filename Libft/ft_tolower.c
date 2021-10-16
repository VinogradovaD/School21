/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:41:29 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/11 16:17:56 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ft_isalpha(ch))
	{
		if (ch >= 'A' && ch <= 'Z')
			return (ch + 32);
		else
			return (ch);
	}
	else
		return (ch);
}
