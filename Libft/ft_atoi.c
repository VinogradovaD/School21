/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:26:47 by                   #+#    #+#             */
/*   Updated: 2021/10/17 19:17:37 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_rank(const char *str);
int ft_pow(int num, int pow);

int ft_atoi(const char *str)
{
	int num;
	int negative;
	int rank = ft_rank(str);

	num = 0;
	if (*str == '-')
		negative = -1;
	while (*str >= '0' && *str <= '9' && rank != 0)
	{
		num += *((int*)str) * ft_pow(10, rank);
		str++;
		rank--;
	}
	num *= negative;
	return (num);
}

int ft_rank(const char *str)
{
	int rank;

	rank = 0;
	while (*str >= '0' && *str <= '9')
	{
		rank++;
		str++;
	}
	return (rank);
}
int ft_pow(int num, int pow)
{
	int new_num;

	new_num = 1;
	while (pow > 0)
	{
		new_num = new_num * num;
		pow--;
	}
	return (new_num);
}