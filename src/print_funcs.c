/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:43:19 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/28 01:42:27 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	print_str_fd(char *str, int fd)
{
	int	ret;

	if (!str)
		return (0);
	ret = 0;
	while (str[ret] != '\0')
		print_char_fd(str[ret++], fd);
	return (ret);
}

int	print_nbr_fd(int n, int fd)
{
	int	ret;

	ret = 0;
	if (n < 0)
	{
		n *= -1;
		ret += print_char_fd('-', fd);
	}
	if (n <= 9)
		ret += print_char_fd(n + 48, fd);
	else
	{
		print_nbr_fd((n / 10), fd);
		ret += print_char_fd((n % 10) + 48, fd);
	}
	return (ret);
}

int	print_hex_fd(unsigned int n, int fd, char flag)
{
	int	ret;

	ret = 0;
	if (n < 16)
	{
		if (n < 16 && flag == 'x')
			ret += print_char_fd((n % 16)["0123456789abcdef"], fd);
		if (n < 16 && flag == 'X')
			ret += print_char_fd((n % 16)["0123456789ABCDEF"], fd);
	}
	else
	{
		print_hex_fd(n / 16, fd, flag);
		if (n < 16 && flag == 'x')
			ret += print_char_fd((n % 16)["0123456789abcdef"], fd);
		if (n < 16 && flag == 'X')
			ret += print_char_fd((n % 16)["0123456789ABCDEF"], fd);
	}
	return (ret);
}

int	print_unsignednbr_fd(unsigned int n, int fd)
{
	int	ret;

	ret = 0;
	if (n <= 9)
		ret += print_char_fd(n + 48, fd);
	else
	{
		print_nbr_fd((n / 10), fd);
		ret += print_char_fd((n % 10) + 48, fd);
	}
	return (ret);
}

int	print_pt_fd(unsigned long pt, int fd)
{
	int	ret;

	ret = 0;
	if (pt < 16)
		ret += print_char_fd((pt % 16)["0123456789abcdef"], fd);
	else
	{
		print_pt_fd(pt / 16, fd);
		ret += print_char_fd((pt % 16)["0123456789abcdef"], fd);
	}
	return (ret);
}
