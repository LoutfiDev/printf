/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:41:50 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/03 15:38:52 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_get_args(va_list args, char c, int *count)
{
	if (c == 'c')
		ft_printchar(va_arg(args, int), count);
	else if (c == 's')
		ft_printstr(va_arg(args, char *), count);
	else if (c == 'p')
		ft_print_address(va_arg(args, unsigned long), count);
	else if (c == 'd')
		ft_printnbr(va_arg(args, int), count);
	else if (c == 'i')
		ft_printnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_print_unsigned(va_arg(args, unsigned int), count);
	else if (c == 'x')
		ft_print_hex(va_arg(args, unsigned int), count);
	else if (c == 'X')
		ft_print_hexa(va_arg(args, unsigned int), count);
	else
		ft_printchar(c, count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	ptr;

	if (!format || !(*format))
		ft_printstr("", &count);
	i = 0;
	count = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%' && (format[i + 1] == 'c'
				|| format[i + 1] == 's' || format[i + 1] == '%'
				|| format[i + 1] == 'p' || format[i + 1] == 'd'
				|| format[i + 1] == 'i' || format[i + 1] == 'u'
				|| format[i + 1] == 'x' || format[i + 1] == 'X'))
			ft_get_args(ptr, format[++i], &count);
		else
			ft_printchar(format[i], &count);
		i++;
	}
	va_end(ptr);
	return (count);
}
// #include <stdio.h>

// int	main(void)
// {
// 	// int a = ft_printf("\001");
// 	// printf("\t\t\t\t%d", a);
// 	// int b = printf("\001");
// 	// printf("\t\t\t\t%d", b);
// 	return (0);
// }
