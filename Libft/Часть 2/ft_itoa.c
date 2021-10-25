/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:17:47 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/25 18:08:16 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	int	l;
	char	*str;

	l = len(n);
	str = (char *) malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	str[l--] = '\0';
	if (n == 0)
	{
		str[l] = '0';
		return (str);
	}
	if (n == -2147483648)
	{
		str[0] = '-';
		str[l--] = 8 + '0';
		n /= 10;
	}
	while (n != 0)
	{
		if (n < 0)
		{
			str[0] = '-';
			n *= (-1);
		}
		str[l--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

int len(int n)
{
	int	l;

	l = 0;
	if (n < 0)
		l++;
	while (n / 10 != 0)
	{
		l++;
		n /= 10;
	}
	l++;
	return (l);
}
