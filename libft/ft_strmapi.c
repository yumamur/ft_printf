/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:12:52 by yumamur           #+#    #+#             */
/*   Updated: 2022/11/28 16:38:11 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*pt;
	unsigned int	i;

	if (!s || (!s && !f))
		return (NULL);
	else if (!f)
		return (ft_strdup(s));
	i = 0;
	pt = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!pt)
		return (NULL);
	while (s[i] != '\0')
	{
		pt[i] = (*f)(i, s[i]);
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
