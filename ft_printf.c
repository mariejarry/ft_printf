/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarry <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:29:52 by mjarry            #+#    #+#             */
/*   Updated: 2022/03/02 10:31:20 by mjarry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putchar(const char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_function_check(va_list args, const char type)
{
	int	len;

	len = 0;
	if (type == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (type == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (type == 'p')
		len = ft_putptr(va_arg(args, unsigned long long), "0123456789abcdef");
	else if (type == 'd' || type == 'i')
		len = ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		len = ft_putunsigned(va_arg(args, unsigned int));
	else if (type == 'x')
		len = ft_putx(va_arg(args, unsigned long), "0123456789abcdef");
	else if (type == 'X')
		len = ft_putx(va_arg(args, unsigned long), "0123456789ABCDEF");
	else if (type == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_function_check(args, str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
/*
int main(void)
{
	char str[] = "hello";

	printf("%d\n", ft_printf("%x\n", 15));
	printf("%d\n", printf("%x\n", 15));
}
*/
