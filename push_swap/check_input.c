/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:15:02 by asid-ahm          #+#    #+#             */
/*   Updated: 2024/04/26 20:21:51 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int check_empty(char **av)
{
	size_t	i;
	size_t	x;

	i = 1;
	x = 0;
	while (av && av[i])
	{
		if (strchr(av[i], ' '))
		{
			x = 0;
			while (av[i][x] == ' ')
				x++;
			if (!av[i][x])
				return (1);
		}
		else
		{
			if (!av[i][0])
				return(1);
		}
		i++;
	}
	return (0);
}

static int check_invalid_char(char **av)
{
	size_t	i;
	size_t	x;
	char a;

	i = 1;
	x = 0;
	while (av && av[i])
	{
		x = -1;
		while (av[i][++x])
		{
			a = av[i][x];
			if ((a == '-' || a == '+' )&& (av[i][x + 1] && av[i][x + 1] >= '0' && av[i][x + 1] <= '9'))
				continue ;
			if ((a < '0' || a > '9') && a != ' ')
				return (1);
		}
		i++;
	}
	return (0);
}

// static int check_special_chars(char **av)
// {
	
// }

void chack_input(char **av)
{
	if (check_empty(av))
	{
		printf ("Error empty string\n");
		exit (1);
	}
	if (check_invalid_char(av))
	{
		printf ("Error char\n");
		exit (1);
	}
}