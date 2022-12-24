/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:38:48 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/20 21:52:56 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ps;
	unsigned char		*pd;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return (dest);
	ps = (const unsigned char *)src;
	pd = (unsigned char *)dest;
	i = 0;
	while (n--)
	{
		pd[i] = ps[i];
		i++;
	}
	return (dest);
}
