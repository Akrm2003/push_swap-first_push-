/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:35:08 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/28 06:32:27 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_cheap number_of_moves(int index_a, int index_b, int size_a, int size_b)
{
    int mid_a;
    int mid_b;
    t_cheap	num;

	mid_a = (size_a / 2);
	mid_b = (size_b / 2);
	if (index_a <= mid_a && index_b <= mid_b)
	{
		// printf("case 1\n");
		num.case_number = 1;
		if (index_a >= index_b)
		{
			num.moves = index_a + 1;
			return (num);
		}
		else
		{
			num.moves = index_b + 1;
			return (num);
		}
	}
	if (index_a > mid_a && index_b > mid_b)
	{
		num.case_number = 2;
		// printf("case 2\n");
		if (((size_a - index_a) >= (size_b - index_b)))
		{
			num.moves = size_a - index_a + 1;
			return (num);
		}
		else
		{
			num.moves = size_b - index_b + 1;
			return (num);
		}
	}
	if (index_a <= mid_a) /*by defualt b > mid_b*/
	{
		num.case_number = 3;
		num.moves = index_a + size_b - index_b + 1;
		// printf("case 3\n");
		return (num);
	}
	// if (index_b <= mid_b) /*by defualt a > mid_a*/
	// printf("case 4\n");
	num.case_number = 4;
	num.moves = index_b + size_a- index_a + 1;
	return (num);
}

t_cheap cheapest(t_stack *a, t_stack *b, int big_three)
{
	t_cheap	num;
	int		wa;
	int		n;
	int		b_index;
	int		a_size;
	int		b_size;

    a_size = ft_lstsize(a);
	b_size = ft_lstsize(b);
	if (a->right_index >= (big_three - 3))
		num.moves = 2147483647;
	// (void) big_three;
	// while (a && a->right_index >= (big_three - 3))
	// 	a = a->next;
	else
	{
		n = find_right_index_after(a, b);
		b_index = find_index_for_right_index(b, n);
		num = number_of_moves(a->index, b_index, a_size, b_size);
		// wa = num.moves;
		num.a_ind = a->index;
		num.b_ind = b_index;
	}
	a = a->next;
	while (a)
	{
		if (a->right_index >= (big_three - 3))
			wa = 2147483647;
		else
		{
			n = find_right_index_after(a, b);
			b_index = find_index_for_right_index(b, n);
			wa = number_of_moves(a->index, b_index, a_size, b_size).moves;
		}
		if (num.moves > wa)
		{
			num = number_of_moves(a->index, b_index, a_size, b_size);
			num.a_ind = a->index;
			num.b_ind = b_index;
		}
		a = a->next;
	}
	return (num);
}
