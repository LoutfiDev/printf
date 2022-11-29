/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a7bood_innas.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:39:18 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/29 09:01:33 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	func_space(const char *str, int **i, int *len)
{
	int	count;

	count = str[(**i) + 1] - '0';
	**i += 1;
	if (count && count >= 0 && count <= 9)
	{
		**i += 1;
		(*len) += count;
		while (count > 0)
		{
			write (1, " ", 1);
			count--;
		}
	}
	return (1);
}

int	func_sharp(int **i)
{
	**i += 1;
	return (1);
}

int	func_plus(int **i)
{
	**i += 1;
	return (1);
}
