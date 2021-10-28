/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clockhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:00:29 by clockhar          #+#    #+#             */
/*   Updated: 2021/10/28 14:01:46 by clockhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	len(int n)
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

void	add_num(char *str, int n, int l)
{
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[l--] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		l;
	char	*str;

	l = len(n);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	str[l--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[l--] = 8 + '0';
			n /= 10;
		}
		add_num(str, n * (-1), l);
	}
	else
		add_num(str, n, l);
	return (str);
}
