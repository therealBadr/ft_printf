#include "ft_printf.h"

void	check_type(va_list argp, const char str, int *count)
{
	// Conversions to implement:
	//
	// %c - print a single character
	if (str == 'c')
		ft_putchar(va_arg(argp, int), count);
	// %s - printing a string
	else if (str == 's')
		ft_putstr(va_arg(argp, char *), count);
	// %d && %i = base 10
	else if (str == 'd' || str == 'i')
		ft_putnbr(va_arg(argp, int), count);
	// %u Prints an unsigned decimal (base 10) number
	else if (str == 'u')
		ft_putnbr_u(va_arg(argp, unsigned int), count);
	// %% Prints a percent sign.
	else if (str == '%')
		ft_putchar('%', count);
	// %x Prints a number in hexadecimal (base 16) lowercase format.
	else if (str == 'x')
		ft_putnbr_hex(va_arg(argp, int), str, count);
	// %X Prints a number in hexadecimal (base 16) uppercase format
	else if (str == 'X')
		ft_putnbr_hex(va_arg(argp, int), str, count);
	// The void * pointer argument has to be printed in hexadecimal
	else if (str == 'p')
		ft_putaddr(va_arg(argp, void *), count);
				
}

int	ft_printf(const char *str, ...)
{
	int	count;
	va_list	argp;

	count = 0;
	va_start(argp, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			check_type(argp, *str, &count);
		}
		else
			ft_putchar(*str, &count);
		str++;
	}
	va_end(argp);
	return (count);
}
