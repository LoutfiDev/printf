/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:41:36 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/02 14:01:12 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_hex(unsigned int nbr, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_print_hex(nbr / 16, &count);
	}
	ft_printchar(base[nbr % 16], &count);
}
