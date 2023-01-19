/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:11:51 by yumamur           #+#    #+#             */
/*   Updated: 2023/01/19 13:45:33 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

int	flag_check(const char *str, t_flag *flags)
{
	int	index;

	index = 0;
	while (str[index] && !ft_strchr("csdiupxX%", str[index]))
	{
		if (str[index] == '-' && flags->precision == 0)
			flags->hyphen += 1;
		else if (str[index] == '#' && flags->precision == 0)
			flags->hash += 1;
		else if (str[index] == '+' && flags->precision == 0)
			flags->plus += 1;
		else if (str[index] == ' ' && flags->precision == 0)
			flags->space += 1;
		else if (str[index] == '0' && flags->precision == 0)
			flags->zero += 1;
		if (str[index] == '.')
		{
			flags->precision += 1;
			precision
		}
		index++;
	}
	return (index);
}
