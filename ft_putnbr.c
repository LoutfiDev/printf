/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:50:51 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/01 19:43:36 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else
	{
		if (n >= 10)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar(n % 10 + '0');
	}
}
