/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax_three.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 04:18:26 by asid-ahm          #+#    #+#             */
/*   Updated: 2024/03/25 04:18:47 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	*ft_lstmax_three(t_list *list)
{
	int		*max_three;

	max_three = (int *)malloc(3 * sizeof(int));
	if (max_three == NULL)
		return (NULL);
	max_three[0] = INT_MIN;
	max_three[1] = INT_MIN;
	max_three[2] = INT_MIN;
	while (list)
	{
		if (list->content > max_three[0])
		{
			max_three[2] = max_three[1];
			max_three[1] = max_three[0];
			max_three[0] = list->content;
		}
		else if (list->content > max_three[1])
		{
			max_three[2] = max_three[1];
			max_three[1] = list->content;
		}
		else if (list->content > max_three[2])
			max_three[2] = list->content;
		list = list->next;
	}
	return (max_three);
}