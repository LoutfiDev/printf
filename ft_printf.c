/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:41:50 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/01 19:56:56 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

//printf("%c %s %d", 'y', "yahya", 24)) => {10}:(nbr char printed)
static void	ft_get_args(va_list args, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		ft_put_address(va_arg(args, int));
	else if (c == 'd')
		ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		ft_put_nbr(va_arg(args, int));
	else if (c == 'u')
		ft_put_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		ft_put_hex(va_arg(args, int));
	else if (c == 'X')
		ft_put_hexa(va_arg(args, int));
	else
		ft_putchar(c);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	ptr;

	if (!format || !(*format))
		ft_putstr("");
	i = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%' && (format[i + 1] == 'c'
				|| format[i + 1] == 's' || format[i + 1] == '%'
				|| format[i + 1] == 'p' || format[i + 1] == 'd'
				|| format[i + 1] == 'i' || format[i + 1] == 'u'
				|| format[i + 1] == 'x' || format[i + 1] == 'X'))
			ft_get_args(ptr, format[++i]);
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (i);
}

int	main(void)
{
	ft_printf("%% %s");
	return (0);
}
