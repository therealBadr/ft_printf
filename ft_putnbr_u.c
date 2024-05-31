#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *count)
{
	if (n < 10)
		ft_putchar(n + '0', count);
	else
	{
		ft_putnbr_u(n / 10, count);
		ft_putnbr_u(n % 10, count);
	}
}
