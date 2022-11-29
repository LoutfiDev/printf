/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:32:01 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/29 09:02:29 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_option
{
	int		flag_plus;
	int		flag_hashtag;
	int		flag_space;
	char	format;
}	t_option;

void	ft_printnbr(int nbr, t_option options, int *count);
void	ft_printstr(char *s, t_option *options, int *count);
void	ft_printchar(char c, t_option options, int *count);
void	ft_print_address(unsigned long n, t_option options, int *count);
void	ft_print_unsigned(unsigned int nbr, t_option options, int *count);
void	ft_print_hex(unsigned int nbr, t_option options, int *count);
void	ft_print_hexa(unsigned int nbr, t_option options, int *count);
int		ft_printf(const char *format, ...);
int		func_space(const char *str, int **i, int *len);
int		func_sharp(int **i);
int		func_plus(int **i);

#endif