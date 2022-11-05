/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:32:01 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/03 14:58:43 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_printnbr(int n, int *count);
void	ft_printstr(char *s, int *count);
void	ft_printchar(char c, int *count);
void	ft_print_address(unsigned long n, int *count);
void	ft_print_unsigned(unsigned int nbr, int *count);
void	ft_print_hex(unsigned int nbr, int *count);
void	ft_print_hexa(unsigned int nbr, int *count);
int		ft_printf(const char *format, ...);

#endif