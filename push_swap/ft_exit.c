/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 00:34:34 by louisalah         #+#    #+#             */
/*   Updated: 2024/04/26 20:19:53 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_stack	**a)
{
	t_stack	*temp;

	temp = NULL;
	while ((*a))
	{
		temp = *a;
		*a = (*a)->next;
		// if (*a )
		free (temp);
		temp = NULL;
	}
	printf("Error");
	exit (1);
}