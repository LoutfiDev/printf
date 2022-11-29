/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:50:07 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/28 14:05:11 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *s, t_option *options, int *count)
{
	int	i;

	if (!s)
	{
		ft_printstr("(null)", options, count);
		return ;
	}
	i = 0;
	while (s[i])
		ft_printchar(s[i++], *options, count);
}
