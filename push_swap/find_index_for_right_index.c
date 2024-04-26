/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index_for_right_index.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:28:11 by louisalah         #+#    #+#             */
/*   Updated: 2024/04/26 19:59:03 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_index_for_right_index(t_stack *a, int right_index)
{
    while (a)
    {
        if (a->right_index == right_index)
            return (a->index);
        a = a->next;
    }
    return (-1);
}

int find_right_index_after(t_stack *a, t_stack *b)
{
    int right_index_after;
    int right_index;
	int	max;

    right_index = a->right_index;
    // printf("right index check = %d\n", right_index);
    right_index_after = -1;
	max = -1;
    while (b)
    {
		if (max < b->right_index)
			max = b->right_index;
        // printf("new right index check = %d\n", b->right_index);
        if (right_index > b->right_index && b->right_index > right_index_after)
            right_index_after = b->right_index;
        b = b->next;
    }
	if (right_index_after == -1)
		right_index_after = max;
    // printf("a = %d && ria = %d\n", a->content, right_index_after);
    return (right_index_after);
}

// int mid(t_stack *a)
// {
//     return ((ft_lstsize(a) \ 2) + 1);
// }