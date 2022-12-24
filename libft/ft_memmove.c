/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:57:37 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/20 21:55:00 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ps;
	unsigned char		*pd;

	if (!dest && !src)
		return (NULL);
	ps = (unsigned char *)src;
	pd = (unsigned char *)dest;
	if (ps < pd)
		while (n--)
			*(pd + n) = *(ps + n);
	else
		ft_memcpy(pd, ps, n);
	return (dest);
}
