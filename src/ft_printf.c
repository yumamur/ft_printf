/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:38:13 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/28 01:42:38 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	t_printf	lst;

	va_start(args, str);
	lst.ret = 0;
	printer(str, args, &lst, 1);
	va_end(args);
	return (lst.ret);
}
