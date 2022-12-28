/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 03:55:32 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/28 17:42:39 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_values
{
	int				ch;
	char			*str;
	unsigned long	pt;
	long			dec;
	unsigned int	ux;
	int				ret;
}	t_values;

typedef struct s_flags
{
	char	flag;
	int		asterix;
	int		dot;
	int		left;
	int		padd_left;
	int		padd_right;
	int		width;
}	t_flag;

int		ft_printf(const char *str, ...);
void	the_str(const char *str, va_list args, t_values *valse, int fd);
int		flag_check(const char *str, t_flag *flags);
void	reset_values(t_values *valse);
void	reset_flags(t_flag *flags);
int		print_char_fd(char c, int fd);


#endif
