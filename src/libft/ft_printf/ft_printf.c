/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkitahar <tkitahar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:38:34 by tkitahar          #+#    #+#             */
/*   Updated: 2024/05/22 18:26:49 by tkitahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hundle_format(va_list ap, char spe)
{
	int	len;

	len = 0;
	if (spe == '%')
		len += ft_putchar('%');
	if (spe == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (spe == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (spe == 'p')
		len += ft_putaddress(va_arg(ap, uintptr_t), "0123456789abcdef");
	else if (spe == 'd' || spe == 'i')
		len += ft_putnbr(va_arg(ap, int), "0123456789");
	else if (spe == 'u')
		len += ft_putnbr(va_arg(ap, unsigned int), "0123456789");
	else if (spe == 'x')
		len += ft_putnbr(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (spe == 'X')
		len += ft_putnbr(va_arg(ap, unsigned int), "0123456789ABCDEF");
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str != '%')
			len += ft_putchar(*str);
		else if (*str == '%' && *(str + 1))
			len += hundle_format(ap, *(++str));
		str++;
	}
	va_end(ap);
	return (len);
}

// #include <libc.h>
// #include <limits.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int	ft;
// 	int	origin;
// 	int	*ft_ad;
// 	int	*origin_ad;

// 	ft = 123;
// 	origin = 123;
// 	ft_ad = &ft;
// 	origin_ad = &origin;
// ft = ft_printf("ft \t %p %p \n", LONG_MIN, LONG_MAX);
// printf("print nbr \t %d \n", ft);
// origin = printf("or \t %p %p \n", LONG_MIN, LONG_MAX);
// printf("print nbr \t %d \n", origin);
// 	return (0);
// }
