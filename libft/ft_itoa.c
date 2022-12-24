/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:30:03 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/17 02:42:30 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static size_t	ft_zerosaver(int n)
{
	while (n != 0)
		return (1 + ft_zerosaver(n / 10));
	return (0);
}

static size_t	ft_digitcount(int n)
{
	if (n == 0)
		return (1);
	else
		return (ft_zerosaver(n));
}
char	*ft_itoa(int n)
{
	char	*pt;
	size_t	d;
	long	x;

	x = n;
	d = ft_digitcount(x);
	if (n < 0)
		d += 1;
	pt = (char *)malloc((d + 1) * sizeof(char));
	if (!pt)
		return (NULL);
	if (n < 0)
		x *= -1;
	pt[d] = '\0';
	while (d > 0)
	{
		d--;
		pt[d] = 48 + (x % 10);
		x /= 10;
	}
	if (n < 0)
		pt[0] = '-';
	return (pt);
}
