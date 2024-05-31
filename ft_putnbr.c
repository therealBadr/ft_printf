#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar('-', count);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + '0', count);
	else
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}
