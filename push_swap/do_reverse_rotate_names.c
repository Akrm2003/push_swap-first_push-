/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_reverse_rotate_names.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:38:09 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/11 15:53:28 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack **a)
{
	reverse_rotate(a);
	printf("rra\n");
}

void	reverse_rotate_b(t_stack **b)
{
	reverse_rotate(b);
	printf("rrb\n");
}

void	reverse_rotate_ab(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
    printf("rrr\n");
}