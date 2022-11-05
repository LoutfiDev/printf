/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:42:12 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/03 14:58:14 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(unsigned int nbr, int *count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_print_hexa(nbr / 16, count);
	}
	ft_printchar(base[nbr % 16], count);
}
