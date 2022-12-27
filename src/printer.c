/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 06:47:08 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/28 01:42:23 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	printer(const char *str, va_list args, t_printf *lst, int fd)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == '%')
		{
			index++;
			lst->flag = str[index];
			check_conv(args, lst, fd);
			reset_struct(lst);
		}
		else
			lst->ret += print_char_fd(str[index], 1);
		index++;
	}
}
