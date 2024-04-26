/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 20:49:07 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/16 04:00:41 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void only_two(t_stack **a)
{
    swap_a(a);
}

static void only_three_help(t_stack **a)
{
    if ((*a)->content > (*a)->next->content)
    {
        swap_a(a);
        reverse_rotate_a(a);
    }
    else
        reverse_rotate_a(a);
}

static void only_three(t_stack **a)
{
    if (find_smallest(*a) == 0)
    {
        reverse_rotate_a(a);
        swap_a(a);
    }
    else if (find_smallest(*a) == 1)
    {
        if ((*a)->content > ft_lstlast(*a)->content)
            rotate_a(a);
        else
            swap_a(a);
    }
    else if (find_smallest(*a) == 2)
        only_three_help(a);
}

void small_sort(t_stack **a)
{
    if (ft_lstsize(*a) == 2 && !is_sorted (*a))
        only_two(a);
    if (ft_lstsize(*a) == 3 && !is_sorted (*a))
        only_three(a);
    // free (*a);
    // free (*b);
}