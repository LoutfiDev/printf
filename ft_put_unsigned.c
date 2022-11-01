/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:43:16 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/01 19:42:28 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_put_unsigned(unsigned long long nbr)
{
	if (nbr >= 10)
	{
		ft_put_unsigned(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}
