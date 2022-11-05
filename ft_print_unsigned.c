/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:43:16 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/03 14:58:18 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int nbr, int *count)
{
	if (nbr >= 10)
	{
		ft_print_unsigned(nbr / 10, count);
	}
	ft_printchar(nbr % 10 + '0', count);
}
