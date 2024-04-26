/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismaxthree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 04:17:50 by asid-ahm          #+#    #+#             */
/*   Updated: 2024/03/25 04:19:54 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ismaxthree(int num, int *max_three)
{
	return (num == max_three[0] || num == max_three[1] || num == max_three[2]);
}

/*
	int	*max_three;

	max_three = ft_lstmax_three(a->head);
	if (!ft_ismaxthree(num, max_three))
		...
	
*/