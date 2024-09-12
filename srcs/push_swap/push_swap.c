/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:03:58 by tkitahar          #+#    #+#             */
/*   Updated: 2024/08/28 22:56:39 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static char	**process_args(int argc, char **argv)
{
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		exit(1);
	if (argc == 2)
		return (split(argv[1], ' '));
	return (argv);
}

static void	sort_if_needed(t_stack_node **a, t_stack_node **b)
{
	if (!stack_sorted(*a))
	{
		if (stack_len(*a) == 2) // TWO_NODE
			sa(a, false);
		else if (stack_len(*a) == 3) // THREE_NODE
			sort_three(a);
		else
			sort_stacks(a, b);
	}
}

static void	free_split(char **str_arr)
{
	int	i;

	i = 0;
	if (!str_arr)
		return ;
	while (str_arr[i])
		free(str_arr[i++]);
	free(str_arr);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**str_arr;

	int	age;
	
	age = TRT;
	a = NULL;
	b = NULL;
	str_arr = process_args(argc, argv);
	init_stack_a(&a, str_arr + 1);
	sort_if_needed(&a, &b);
	free_stack(&a);
	if (argc == 2)
		free_split(str_arr);
	return (0);
}
