/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:14:33 by tkitahar          #+#    #+#             */
/*   Updated: 2024/09/10 12:35:50 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"
#include <stdbool.h>

static void	rotate_both(t_stack_node **a, t_stack_node **b,
											t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
		rr(a, b);
	set_index_and_abovemidian(*a);
	set_index_and_abovemidian(*b);
}

static void	rev_rotate_both(t_stack_node **a, t_stack_node **b,
												t_stack_node *cheapest_node)
{
	while (*b != cheapest_node && *a != cheapest_node)
		rrr(a, b);
	set_index_and_abovemidian(*a);
	set_index_and_abovemidian(*b);
}

static void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest_node;

	cheapest_node = get_cheapest_node(*a);
	if (cheapest_node->above_median && cheapest_node->target_node->above_median)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_median)
		&& !(cheapest_node->target_node->above_median))
		rev_rotate_both(a, b, cheapest_node);
	rotate_until_topnode(a, cheapest_node, 'a');
	rotate_until_topnode(b, cheapest_node->target_node, 'b');
	pb(b, a);
}

static void	min_on_top(t_stack_node **a)
{
	while ((*a)->nbr != find_smallest_nbr_node(*a)->nbr)
	{
		if (find_smallest_nbr_node(*a)->above_median)
			ra(a);
		else
			rra(a);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = count_stack_len(*a);
	if (len_a-- > 3 && !is_stack_sorted(*a))
		pb(b, a);
	if (len_a-- > 3 && !is_stack_sorted(*a))
		pb(b, a);
	while (len_a-- > 3 && !is_stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	set_index_and_abovemidian(*a);
	min_on_top(a);
}
