#include "ft_printf.h"

void	ft_putaddr(void *ptr, int *count)
{
	unsigned long	addr;

	addr = (unsigned long)ptr;
	ft_putstr("0x", count);
	if (addr == 0)
		ft_putchar('0', count);
	else
		ft_putnbr_hex_long(addr, 'x', count);
}
