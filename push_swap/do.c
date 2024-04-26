/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 01:10:02 by louisalah         #+#    #+#             */
/*   Updated: 2024/03/23 10:17:10 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **a)
{
	int	i;

	i = 0;
	if (ft_lstsize(*a) >= 2)
	{
		i = (*a)->content;
		(*a)->content = (*a)->next->content;
		(*a)->next->content = i;
	}
}

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*temp;

	temp = NULL;
	if (ft_lstsize(*src) == 1)
	{
		temp = ft_lstnew((*src)->content);
		temp->right_index = (*src)->right_index;
		if (ft_lstsize(*dst) == 0)
			*dst =  temp;
		else
			ft_lstadd_front(dst, &temp);
		free (*src);
		*src = NULL;
	}
	if (ft_lstsize(*src) > 1)
	{
		temp = ft_lstnew((*src)->content);
		temp->right_index = (*src)->right_index;
		if (ft_lstsize(*dst) == 0)
			*dst =  temp;
		else
			ft_lstadd_front(dst, &temp);
		*src = (*src)->next;
		free ((*src)->prev);
		(*src)->prev = NULL;
		temp = *src;
		while (temp)
		{
			temp->index--;
			temp = temp->next;
		}
	}
}

void	rotate(t_stack **a)
{
	t_stack	*temp;

	temp = NULL;
	if (ft_lstsize(*a) >= 2)
	{
		temp = ft_lstnew((*a)->content);
		temp->right_index = (*a)->right_index;
		ft_lstadd_back(a, &temp);
		*a = (*a)->next;
		free ((*a)->prev);
		(*a)->prev = NULL;
		while (temp)
		{
			temp->index--;
			temp = temp->prev;
		}
	}
}

void	reverse_rotate(t_stack **a)
{
	t_stack	*temp;

	temp = NULL;
	if (ft_lstsize(*a) >= 2)
	{
		temp = ft_lstnew(ft_lstlast(*a)->content);
		temp->right_index = (ft_lstlast(*a))->right_index;
		ft_lstadd_front(a, &temp);
		*a = ft_lstlast(*a);
		*a = (*a)->prev;
		free ((*a)->next);
		(*a)->next = NULL;
		(*a) = ft_lstfirst(*a);
	}
}