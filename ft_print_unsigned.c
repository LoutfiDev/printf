/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:43:16 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/26 10:38:12 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int nbr, t_option options, int *count)
{
	if (nbr >= 10)
	{
		ft_print_unsigned(nbr / 10, options, count);
	}
	ft_printchar(nbr % 10 + '0', options, count);
}
