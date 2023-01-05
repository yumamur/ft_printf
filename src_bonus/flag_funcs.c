#include "../include/ft_printf_bonus.h"

int	flag_precision(const char *str, t_flag *flags)
{
	int	index;

	index = 0;
	while (str[index++] == '.')
	{
		if (!flags->precision)
			flags->precision = 1;
		else
			flags->precision = -1;
	}
	if (flags->precision == 1)
	{
		while (str[index] >= '0' && str[index] <= '9')
		{

		}
	}
	return (index);
}
