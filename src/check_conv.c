/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 07:04:53 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/28 01:42:43 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	check_conv_1(va_list args, t_printf *lst, int fd)
{
	if (lst->flag == 'd' || lst->flag == 'i')
	{
		lst->dec = va_arg(args, int);
		lst->ret += print_nbr_fd((int)(lst->dec), fd);
	}
	if (lst->flag == 'x' || lst->flag == 'X')
	{
		lst->ux = va_arg(args, unsigned int);
		lst->ret += print_hex_fd(lst->ux, fd, lst->flag);
	}
	if (lst->flag == 'u')
	{
		lst->ux = va_arg(args, unsigned int);
		lst->ret += print_unsignednbr_fd(lst->ux, fd);
	}
	if (lst->flag == 'p')
	{
		lst->pt = (unsigned long)va_arg(args, void *);
		lst->ret += print_pt_fd(lst->pt, fd);
	}
}

void	check_conv(va_list args, t_printf *lst, int fd)
{
	if (lst->flag == 'c')
	{
		lst->ch = va_arg(args, int);
		lst->ret += print_char_fd(lst->ch, fd);
	}
	if (lst->flag == 's')
	{
		lst->str = va_arg(args, char *);
		if (!lst->str)
			lst->ret += print_str_fd("(null)", fd);
		else
			lst->ret += print_str_fd(lst->str, fd);
	}
	if (lst->flag == '%')
		lst->ret += print_char_fd('%', fd);
	else
		check_conv_1(args, lst, fd);
}
