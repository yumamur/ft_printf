/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:32:47 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/17 06:09:59 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ifexist(const char c, const char *ctrl)
{
	while (*ctrl != '\0')
	{
		if (c == *ctrl)
			return (1);
		ctrl++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	long unsigned int	size;
	char				*pt;

	if (!s1)
		return (NULL);
	while (s1 && ft_ifexist(*s1, set) != 0)
		s1++;
	size = ft_strlen(s1);
	pt = (char *)&s1[size - 1];
	if (pt == NULL)
		return (NULL);
	while (*s1 != '\0' && ft_ifexist(*pt, set) != 0)
		pt--;
	size = pt - s1 + 2;
	pt = (char *)malloc(size * sizeof(char));
	if (!pt)
		return (NULL);
	pt[--size] = '\0';
	while (size > 0)
	{
		size--;
		pt[size] = s1[size];
	}
	pt[0] = s1[0];
	return (pt);
}
