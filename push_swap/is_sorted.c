/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisalah <louisalah@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:48:38 by asid-ahm          #+#    #+#             */
/*   Updated: 2024/03/15 01:57:41 by louisalah        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *a)
{
    int min;

    min = 0;
    if (a)
    {
        while (a->next)
        {
        min = a->content;
        if (min > a->next->content)
            return (0);
        a= a->next;
        }
    }
    return (1);
}

int is_reversed_sorted(t_stack *a)
{
    int max;

    max = 0;
    if (a)
    {
        while (a->next)
        {
        max = a->content;
        if (max < a->next->content)
            return (0);
        a= a->next;
        }
    }
    return (1);
}