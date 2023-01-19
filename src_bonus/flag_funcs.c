/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:05:23 by yumamur           #+#    #+#             */
/*   Updated: 2023/01/19 11:05:34 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

int	flag_precision(const char *str, t_flag *flags)
{
	int	index;

	index = 0;
	while (str[index++] == '.')
	{
		if (!flags->precision)
			flags->precision = 1;
		else
			flags->precision = -1;
	}
	if (flags->precision == 1)
	{
		while (str[index] >= '0' && str[index] <= '9')
		{
		}
	}
	return (index);
}
