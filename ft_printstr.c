/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:50:07 by yloutfi           #+#    #+#             */
/*   Updated: 2022/11/02 14:02:46 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printstr(char *s, int *count)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		ft_printchar(s[i++], &count);
}
