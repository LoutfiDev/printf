/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:41:36 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/01 19:25:40 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_put_hex(unsigned long nbr)
{
	char	*base;

	base = "0123465789abcdef";
	if (nbr >= 16)
	{
		ft_put_hex(nbr / 16);
	}
	ft_putchar(base[nbr % 16]);
}
