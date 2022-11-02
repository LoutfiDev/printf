/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:41:08 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/02 13:59:53 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_hex(unsigned long nbr, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_hex(nbr / 16, &count);
	}
	ft_printchar(base[nbr % 16], &count);
}

void	ft_print_address(unsigned long n, int *count)
{
	if (n == 0)
		ft_printstr("(nil)", &count);
	ft_printstr("0x", &count);
	ft_hex(n, &count);
}
