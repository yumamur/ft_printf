/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:54:07 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/17 06:58:38 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	b;

	if ((!dest || !src) && size == 0)
		return (0);
	i = ft_strlen(dest);
	b = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[b] != '\0' && i + 1 < size)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[b]));
}
