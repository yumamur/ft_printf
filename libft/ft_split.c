/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:50:59 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/24 02:27:05 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_arrcount(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (count);
}

static size_t	ft_wordlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c && *(s - 1) != c)
			break ;
		if (*s != c)
			i++;
		s++;
	}
	return (i);
}

static char	**ft_f_that_line(const char *s, char c, char **pt, size_t count)
{
	size_t	n;

	n = 0;
	if (count != 0)
	{
		while (*s != '\0')
		{
			count = 0;
			pt[n] = (char *)malloc((ft_wordlen(s, c) + 1) * sizeof(*s));
			if (!pt[n])
				return (NULL);
			while (*s != c && *s != '\0')
				pt[n][count++] = *s++;
			if (*s == '\0')
				s--;
			pt[n][count] = '\0';
			s++;
			while (*s == c && *s != '\0')
				s++;
			n++;
		}
	}
	pt[n] = NULL;
	return (pt);
}

char	**ft_split(const char *s, char c)
{
	size_t	count;
	char	**pt;

	if (!s || s[0] == 0)
	{
		pt = ft_calloc(1, sizeof(char *));
		pt[0] = NULL;
		return (pt);
	}
	while (*s == c)
		s++;
	count = ft_arrcount(s, c);
	pt = (char **)malloc((count + 1) * sizeof(s));
	if (!pt)
		return (NULL);
	ft_f_that_line(s, c, pt, count);
	return (pt);
}
