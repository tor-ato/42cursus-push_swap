/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:03:58 by tkitahar          #+#    #+#             */
/*   Updated: 2024/08/26 16:03:58 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node *a;
	t_stack_node *b;

	a = NULL;
	b = NULL;
	if(argc == 1 &&(argc == 2 && !argv[1][0]))
		return (1);
	else if(argc == 2)
		argv = split(argv[1], ' ');
	init_stack_a(&a, argv + 1);
}
