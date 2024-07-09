/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:26:14 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/11 16:26:59 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	test1;
// 	char	test2;
// 	char	test3;

// 	test1 = 'A';
// 	test2 = 'a';
// 	test3 = '9';
// 	printf("\n");
// 	printf("test1 \n");
// 	printf("origin\t%d\n", isupper(test1));
// 	printf("ft\t%d\n", ft_isupper(test1));
// 	printf("\n");
// 	printf("test2 \n");
// 	printf("origin\t%d\n", isupper(test2));
// 	printf("ft\t%d\n", ft_isupper(test2));
// 	printf("\n");
// 	printf("test3 \n");
// 	printf("origin\t%d\n", isupper(test3));
// 	printf("ft\t%d\n", ft_isupper(test3));
// 	printf("\n");
// }
