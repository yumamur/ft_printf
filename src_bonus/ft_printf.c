/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:38:13 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/28 17:34:09 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	t_values	valse;

	va_start(args, str);
	valse.ret = 0;
	the_str(str, args, &valse, 1);
	va_end(args);
	return (valse.ret);
}
