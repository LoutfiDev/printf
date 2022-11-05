/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:50:07 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/03 15:07:44 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *s, int *count)
{
	int	i;

	if (!s)
	{
		ft_printstr("(null)", count);
		return ;
	}
	i = 0;
	while (s[i])
		ft_printchar(s[i++], count);
}
