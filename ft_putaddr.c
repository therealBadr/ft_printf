#include "ft_printf.h"

void	ft_putaddr(void *ptr, int *count)
{
	unsigned long	addr;

	addr = (unsigned long)ptr;
	ft_putstr("0x", count);
	ft_putnbr_hex(addr, 'x', count);
}
