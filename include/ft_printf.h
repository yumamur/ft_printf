/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yumamur <yumamur@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 05:08:10 by yumamur           #+#    #+#             */
/*   Updated: 2022/12/27 23:58:42 by yumamur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_list
{
	char			flag;
	int				ch;
	char			*str;
	unsigned long	pt;
	long			dec;
	unsigned int	ux;
	int				ret;
}	t_printf;

int		ft_printf(const char *str, ...);
void	the_str(const char *str, va_list args, t_printf *lst, int fd);
void	reset_struct(t_printf *lst);
void	check_conv(va_list args, t_printf *lst, int fd);
size_t	ft_strlen(const char *str);
int		print_char_fd(char c, int fd);
int		print_str_fd(char *str, int fd);
int		print_nbr_fd(int dec, int fd);
int		print_hex_fd(unsigned int hex, int fd, char flag);
int		print_unsignednbr_fd(unsigned int n, int fd);
int		print_pt_fd(unsigned long pt, int fd);

#endif
