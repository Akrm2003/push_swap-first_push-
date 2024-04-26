/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asid-ahm <asid-ahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:44:30 by louisalah         #+#    #+#             */
/*   Updated: 2024/04/26 19:40:00 by asid-ahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_stack
{
	int			index;
	int			right_index;
	int				content;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef struct s_cheap
{
	int moves;
	int case_number;
	int	a_ind;
	int	b_ind;
}	t_cheap;
void	chack_input(char **av);
void	ft_lstadd_back(t_stack **lst, t_stack **new1);
void	ft_lstadd_front(t_stack **lst, t_stack **new1);
void	ft_lstclear(t_stack **lst, void (*del)(void *));
t_stack	*ft_lstlast(t_stack *lst);
t_stack	*ft_lstfirst(t_stack *lst);
t_stack	*ft_lstnew(int content);
int		ft_lstsize(t_stack *lst);
void	swap(t_stack **a);
void	push(t_stack **src, t_stack **dst);
void	rotate(t_stack **a);
void	reverse_rotate(t_stack **a);
int		is_sorted(t_stack *a);
int		is_reversed_sorted(t_stack *a);
int		ft_atoi(const char *str, t_stack **a);
void 	small_sort(t_stack **a);
int		find_index_for_right_index(t_stack *a, int right_index);
int		find_right_index_after(t_stack *a, t_stack *b);
int		find_smallest(t_stack *a);
int		find_next_smallest(t_stack *a, int smallest);
int		find_second_smallest(t_stack *a);
int		find_third_smallest(t_stack *a);
void	ft_exit(t_stack	**a);
void	push_a(t_stack **a, t_stack **b);
void	push_b(t_stack **b, t_stack **a);
void	swap_a(t_stack **a);
void	swap_b(t_stack **b);
void	swap_ab(t_stack **a, t_stack **b);
void	reverse_rotate_a(t_stack **a);
void	reverse_rotate_b(t_stack **b);
void	reverse_rotate_ab(t_stack **a, t_stack **b);
void	rotate_a(t_stack **a);
void	rotate_b(t_stack **b);
void	rotate_ab(t_stack **a, t_stack **b);
void    four_algo(t_stack **a, t_stack **b);
void    five_algo(t_stack **a, t_stack **b);
void    big_algo(t_stack **a, t_stack **b, t_cheap wa);
t_cheap	number_of_moves(int index_a, int index_b, int size_a, int size_b);
t_cheap cheapest(t_stack *a, t_stack *b, int big_three);
char		**ft_split(char const *s, char c);