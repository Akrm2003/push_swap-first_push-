/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:51:40 by asid-ahm          #+#    #+#             */
/*   Updated: 2024/03/23 20:48:24 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_stack **lst, t_stack **new1)
{
	if (*lst == NULL)
		*lst = *new1;
	if (*new1 != NULL && *lst != NULL)
	{
		(*new1)->next = *lst;
		(*lst)->prev = *new1;
		while (*lst)
		{
			(*lst)->index++;
			*lst = (*lst)->next;
		}
		*lst = *new1;
	}
}
