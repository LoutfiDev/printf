/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:41:50 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/29 13:14:19 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_valid(char c)
{
	if (c == 'c' || c == 's'
		|| c == 'd' || c == 'i'
		|| c == 'u' || c == 'p'
		|| c == 'x' || c == 'X'
		|| c == '#' || c == ' '
		|| c == '+')
		return (1);
	return (0);
}

static t_option	ft_init(void)
{
	t_option	options;

	options.flag_hashtag = 0;
	options.flag_plus = 0;
	options.flag_space = 0;
	options.format = 0;
	return (options);
}

static t_option	fill_struct(const char *format, int *i, int *count)
{
	t_option	options;

	options = ft_init();
	if (format[*i] == '%' || !is_valid(format[*i]))
	{
		options.format = format[(*i)++];
		return (options);
	}
	while (format[*i] && format[*i] != '%' && is_valid(format[*i]))
	{
		if (format[*i] == '#' && !options.flag_hashtag)
			options.flag_hashtag = func_sharp(&i);
		if (format[*i] == '+' && !options.flag_plus)
			options.flag_plus = func_plus(&i);
		else if (format[*i] == ' ' && !options.flag_space)
			options.flag_space = func_space(format, &i, count);
		else if (!options.format && format[*i] != '#'
			&& format[*i] != ' ' && format[*i] != '+')
		{
			options.format = format[(*i)++];
			break ;
		}
	}
	return (options);
}

static void	ft_get_args(va_list args, t_option options, int *count)
{
	if (options.format == 'c')
		ft_printchar(va_arg(args, int), options, count);
	else if (options.format == 's')
		ft_printstr(va_arg(args, char *), &options, count);
	else if (options.format == 'p')
		ft_print_address(va_arg(args, unsigned long), options, count);
	else if (options.format == 'd' || options.format == 'i')
		ft_printnbr(va_arg(args, int), options, count);
	else if (options.format == 'u')
		ft_print_unsigned(va_arg(args, unsigned int), options, count);
	else if (options.format == 'x')
		ft_print_hex(va_arg(args, unsigned int), options, count);
	else if (options.format == 'X')
		ft_print_hexa(va_arg(args, unsigned int), options, count);
	else
		ft_printchar(options.format, options, count);
}

int	ft_printf(const char *format, ...)
{
	int			count;
	int			i;
	t_option	options;
	va_list		args;

	if (!format || !(*format))
		ft_printstr("", NULL, &count);
	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			options = fill_struct(format, &i, &count);
			ft_get_args(args, options, &count);
		}	
		else
			ft_printchar(format[i++], options, &count);
	}
	va_end(args);
	return (count);
}
