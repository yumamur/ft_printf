/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:59:17 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/28 17:37:09 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

void	reset_values(t_values *valse)
{
	valse->ch = 0;
	valse->str = 0;
	valse->pt = 0;
	valse->dec = 0;
	valse->ux = 0;
}

void	reset_flag(t_flag *flags)
{
	flags->flag = 0;
	flags->hyphen = 0;
	flags->zero = 0;
	flags->hash = 0;
	flags->precision = 0;
	flags->plus = 0;
	flags->space = 0;
	flags->left = 0;
	flags->padd_left = 0;
	flags->padd_right = 0;
	flags->maxwidth = 0;
	flags->minwidth = 0;
	flags->error = 0;
}
