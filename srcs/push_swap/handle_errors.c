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

// int	error_syntax(char *str_n)
// {
// 	if (!(*str_n == '+' || *str_n == '-' || (*str_n >= '0' && *str_n <= '9')))
// 		return (1);
// 	if ((*str_n == '+' || *str_n == '-') && \
// 			!(str_n[1] >= '0' && str_n[1] <= '9'))
// 		return (1);
// 	while (*++str_n)
// 	{
// 		if (!(*str_n >= '0' && *str_n <= '9'))
// 			return (1);
// 	}
// 	return (0);
// }

// FIXME: bool is better.
// FIXME: name
// ex: bool	is_syntax_error(char *str_n)
// 命名は動詞から
// ex : t_data *{誤解を産まない動詞}_male(t_data *data);
int	error_syntax(char *str_n)
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

int	error_duplicate(t_stack_node *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->nbr == n)
			return (1);
		a = a->next;
	}
	return (0);
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

void	free_errors(t_stack_node **a)
{
	free_stack(a);
//	ft_printf("Error\n");
	write(STDERR_FILENO, "Error\n", 6);
//	dprintf(STDERR_FILENO, "Error\n");
	exit(1);
}
