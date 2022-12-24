/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:38:13 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/24 20:14:17 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>

static int	ft_checkconv(const char *str, const char format, va_list args, \
			int *index)
{
	int	printlen;

	printlen = 0;
	if (&format == &str[*index])
		if (format == 'c')
			ft_putstr(va_arg(args, ));
		else if (format == 's')
		else if (format == 'p')
		else if (format == 'd')
		else if (format == 'i')
		else if (format == 'u')
		else if (format == 'x' || format == 'X')
		else if (format == '%')
		ft_putstr(va_arg();
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		index;
	int		printlen;

	printlen = 0;
	index = 0;
	va_start(args, str);
	while (str)
	{
		if (*str == '%' && ft_checkconv(str, str[index + 1], args, &index))
			str++;
		else
		{
			ft_putchar();
			printlen++;
		}
		str++;
	}
	va_end(args);
	return (printlen);
}
