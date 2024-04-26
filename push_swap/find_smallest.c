/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:49:46 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/18 01:56:13 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_smallest(t_stack *a)
{
    int  min_index;
    int  min;

	min = a->content;
	min_index = a->index;
    while (a->next)
    {
		if (min > a->next->content)
		{
			min = a->next->content;
			min_index = a->next->index;
		}
		a = a->next;
    }
	return (min_index);
}

int find_second_smallest(t_stack *a)
{
    int  second_min_index;
    int  second_min;
	int	small;

	small = find_smallest(a);
	if (small == 0)
		a = a->next;
	second_min = a->content;
	second_min_index = a->index;
    while (a->next)
    {
		if (second_min > a->next->content && a->next->index != small)
		{
			second_min = a->next->content;
			second_min_index = a->next->index;
		}
		a = a->next;
    }
	return (second_min_index);
}

int find_third_smallest(t_stack *a)
{
    int  third_min_index;
    int  third_min;
	int	small;
	int	second_small;

	small = find_smallest(a);
	second_small = find_second_smallest(a);
	if (small == 0 || second_small == 0)
		a = a->next;
	if (small == 0 && second_small == 1)
		a = a->next;
	third_min = a->content;
	third_min_index = a->index;
    while (a->next)
    {
		if (third_min > a->next->content)
		{
			if (a->next->index != second_small && a->next->index != small)
			{
				third_min = a->next->content;
				third_min_index = a->next->index;
			}
		}
		a = a->next;
    }
	return (third_min_index);
}

int find_next_smallest(t_stack *a, int	smallest)
{
	static int i;
	int	container;
    int  next_min_index;
    int  min;

	container = 0;
	while (a->next && a->index != smallest)
		a = a->next;
	container = a->content;
	// printf("container[%d] = %d\n", i, container);
	// if (!smallest && a->next)
	// {
	// 	printf("waa\n");
	// 	a = a->next;
	// }
	// else
	a = ft_lstfirst(a);
	while (a->next && a->content <= container)
		a = a->next;
	min = a->content;
	next_min_index = a->index;
    while (a && a->next)
    {
		if (min > a->next->content && a->next->content > container)
		{
			min = a->next->content;
			next_min_index = a->next->index;
		}
		a = a->next;
    }
	// printf("min[%d] = %d\n",i , min);
	i++;
	return (next_min_index);
}