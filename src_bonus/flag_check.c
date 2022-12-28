/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:11:51 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/28 17:43:28 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf_bonus.h"

int	flag_check(const char *str, t_flag *flags)
{
	int	index;

	index = 0;
	while (str[index])
	{
		flags->flag = str[index];
	}
	return(index);
}
