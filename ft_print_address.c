/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:41:08 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/28 12:31:38 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_lengh(unsigned long nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

static void	ft_hex(unsigned long nbr, t_option options, int *count)
{
	char			*base;
	char			*n;
	int				len;
	int				i;

	base = "0123456789abcdef";
	len = ft_get_lengh(nbr);
	n = malloc((len + 1) * sizeof(char *));
	if (!n)
		return ;
	i = 0;
	while (i < len)
	{
		n[len - i - 1] = base[nbr % 16];
		nbr = nbr / 16;
		i++;
	}
	n[len] = '\0';
	ft_printstr(n, &options, count);
	free(n);
}

void	ft_print_address(unsigned long n, t_option options, int *count)
{
	if (n == 0)
	{
		ft_printstr("0x0", &options, count);
		return ;
	}
	ft_printstr("0x", &options, count);
	ft_hex(n, options, count);
}
