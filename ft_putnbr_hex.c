#include "ft_printf.h"

void ft_putnbr_hex(unsigned int n, char s, int *count)
{
    const char *hex;
    
    if (s == 'x')
        hex = "0123456789abcdef";
    else
        hex = "0123456789ABCDEF";
    
    if (n < 16)
        ft_putchar(hex[n], count);
    else
    {
        ft_putnbr_hex(n / 16, s, count);
        ft_putnbr_hex(n % 16, s, count);
    }
}
