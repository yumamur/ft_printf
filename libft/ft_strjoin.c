/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:01:13 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/17 06:42:43 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	l1;
	size_t	l2;
	char	*r;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	r = (char *)malloc((l1 + l2) * sizeof(*s1));
	if (!r)
		return (NULL);
	while (*s1 != '\0')
		*(r++) = *((char *)s1++);
	while (*s2 != '\0')
		*(r++) = *((char *)s2++);
	*r = '\0';
	return (r - l1 - l2);
}
