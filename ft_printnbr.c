/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:50:51 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/29 13:13:12 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_lengh(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static char	*ft_itoa(int nbr)
{
	char	*n;
	int		len;
	int		i;

	if (nbr == 0)
	{
		len = 1;
	}
	else
		len = ft_get_lengh(nbr);
	n = malloc((len + 1) * sizeof(char *));
	if (!n)
		return (NULL);
	i = 0;
	while (i < len)
	{
		n[len - i - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	n[len] = '\0';
	return (n);
}

void	ft_printnbr(int nbr, t_option options, int *count)
{
	char	*n;

	n = NULL;
	if (nbr >= 0)
	{
		if (options.flag_plus)
			ft_printchar('+', options, count);
		else if (options.flag_space)
			ft_printstr(" ", &options, count);
		n = ft_itoa(nbr);
	}
	else if (nbr == -2147483648)
	{
		ft_printstr("-2", &options, count);
		n = ft_itoa(147483648);
	}
	else if (nbr < 0)
	{
		ft_printchar('-', options, count);
		n = ft_itoa(-nbr);
	}
	ft_printstr(n, &options, count);
	free(n);
}
