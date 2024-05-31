#include "ft_printf.h"

void	ft_putnbr_hex_long(unsigned long n, char s, int *count)
{
    if (n < 16)
    {
        ft_putnbr_hex((unsigned int)n, s, count);
    }
    else
    {
        ft_putnbr_hex_long(n / 16, s, count);
        ft_putnbr_hex((unsigned int)(n % 16), s, count);
    }
}
