/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:42:12 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/01 19:32:53 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_put_hexa(unsigned long nbr)
{
	char	*base;

	base = "0123465789ABCDEF";
	if (nbr >= 16)
	{
		ft_put_hex(nbr / 16);
	}
	ft_putchar(base[nbr % 16]);
}
