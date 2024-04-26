/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:51:37 by asid-ahm          #+#    #+#             */
/*   Updated: 2024/04/26 04:54:52 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	result(const char *str, size_t i, size_t x, int n, t_stack **a)
{
	unsigned long long	k;
	unsigned long long	tmp;

	tmp = 0;
	k = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i] && k < 2147483647)
	{
		tmp = k;
		k = k * 10 + str[i++] - '0';
		if (k < tmp || ((i - x) > 19))
		{
			if (n == 1)
				return (-1);
			return (0);
		}
	}
	if ((k > 2147483647 && n == 1) || (k > 2147483648 && n == -1))
		ft_exit(a);
	return (k);
}

int	ft_atoi(const char *str, t_stack **a)
{
	size_t	i;
	size_t	x;
	size_t	j;
	int		n;

	x = 0;
	i = 0;
	n = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
		x++;
	}
	j = i;
	while (str[j])
	{
		if (str[j] < '0' || str[j] > '9')
			ft_exit(a);
		j++;
	}
	while (str[i] == '0' && str[i])
	{
		i++;
		x++;
	}
	return (n * result(str, i, x, n, a));
}
