#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	if (str == NULL)
		ft_putstr("(null)", count);
	while (*str != '\0')
	{
		ft_putchar(*str, count);
		str++;
	}
}
