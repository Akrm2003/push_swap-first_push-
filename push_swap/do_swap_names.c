/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_swap_names.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:28:08 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/11 15:53:35 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **a)
{
	swap(a);
	printf("sa\n");
}

void	swap_b(t_stack **b)
{
	swap(b);
	printf("sb\n");
}

void	swap_ab(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	printf("ss\n");
}