/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:42:12 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/28 18:09:56 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_lengh(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

void	ft_print_hexa(unsigned int nbr, t_option options, int *count)
{
	char	*base;
	char	*n;
	int		len;
	int		i;

	base = "0123456789ABCDEF";
	if (options.flag_hashtag && nbr != 0)
		ft_printstr("0X", &options, count);
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
