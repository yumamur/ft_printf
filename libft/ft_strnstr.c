/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:51:13 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/17 06:55:45 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	i;
	size_t	l;

	i = 0;
	if (haystack == NULL && len == 0)
		return (0);
	if (needle[i] == '\0')
		return ((char *)haystack);
	l = len;
	while (haystack[i] != '\0' && l-- > 0)
	{
		a = 0;
		while (haystack[i + a] == needle[a] && haystack[i + a] != '\0')
		{
			if (needle[a + 1] == '\0' && len > a + i)
				return ((char *)&haystack[i]);
			a++;
		}
		i++;
	}
	return (NULL);
}
