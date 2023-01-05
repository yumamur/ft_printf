/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 06:47:08 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/28 17:43:46 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

void	the_str(const char *str, va_list args, t_values *valse, int fd)
{
	int		index;
	t_flag	flags;

	index = 0;
	while (str[index])
	{
		reset_flags(&flags);
		if (str[index] == '%' && !(flags.error))
		{
			index += flag_check(&str[index], &flags);
			sendto_print(args, valse, &flags, fd);
			reset_values(valse);
		}
		else
			valse->ret += print_char_fd(str[index], fd);
		index++;
	}
	reset_flags(&flags);
}
