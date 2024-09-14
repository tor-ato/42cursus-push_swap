/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:20:01 by tkitahar          #+#    #+#             */
/*   Updated: 2024/09/10 12:43:36 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <stdlib.h>
# include "../libft/includes/libft.h"
typedef enum s_age 
{
	KENTA = 27,
	TRT = 24,
}			t_age;

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

bool			is_error_syntax(char *str_n);
bool			is_error_duplicate(t_stack_node *a, int n);
void			free_stack(t_stack_node **stack);
void			free_and_output_errors(t_stack_node **a);

void			init_stack_a(t_stack_node **a, char **argv);
char			**split(char *s, char c);

void			init_nodes_a(t_stack_node *a, t_stack_node *b);
void			init_nodes_b(t_stack_node *a, t_stack_node *b);
void			set_index_and_abovemidian(t_stack_node *stack);
void			find_and_set_cheapstcost_node(t_stack_node *stack);
t_stack_node	*get_cheapest_node(t_stack_node *stack);
void			rotate_until_topnode(t_stack_node **stack, t_stack_node *top_node,
					char stack_name);

int				count_stack_len(t_stack_node *stack);
t_stack_node	*find_last_node(t_stack_node *stack);
bool			is_stack_sorted(t_stack_node *stack);
t_stack_node	*find_smallest_nbr_node(t_stack_node *stack);
t_stack_node	*find_biggest_nbr_node(t_stack_node *stack);

void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);
void			pa(t_stack_node **a, t_stack_node **b);
void			pb(t_stack_node **b, t_stack_node **a);

void			move_b_to_a(t_stack_node **a, t_stack_node **b);
void			sort_three(t_stack_node **a);
void			sort_stacks(t_stack_node **a, t_stack_node **b);

#endif
