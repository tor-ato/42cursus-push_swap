/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:21:41 by tkitahar          #+#    #+#             */
/*   Updated: 2024/08/28 22:55:34 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

bool	is_error_syntax(char *str_n)
{
	if (!(*str_n == '+' || *str_n == '-' || (*str_n >= '0' && *str_n <= '9')))
		return (EXIT_FAILURE);
	if ((*str_n == '+' || *str_n == '-') && \
			!(str_n[1] >= '0' && str_n[1] <= '9'))
		return (EXIT_FAILURE);
	while (*++str_n)
	{
		if (!(*str_n >= '0' && *str_n <= '9'))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

bool	is_error_duplicate(t_stack_node *a, int n)
{
	if (!a)
		return (NULL);
	while (a)
	{
		if (a->nbr == n)
			return (EXIT_FAILURE);
		a = a->next;
	}
	return (EXIT_SUCCESS);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_and_output_errors(t_stack_node **a)
{
	free_stack(a);
	ft_dprintf(STDERR_FILENO, "Error\n");
	exit(EXIT_SUCCESS);
}
