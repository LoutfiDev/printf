/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:50:51 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/02 14:02:32 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_printnbr(-214748364, &count);
		ft_printchar('8', &count);
	}
	else if (n < 0)
	{
		ft_printchar('-', &count);
		ft_printnbr(-n, &count);
	}
	else
	{
		if (n >= 10)
		{
			ft_printnbr(n / 10, &count);
		}
		ft_printchar(n % 10 + '0', &count);
	}
}
