#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <strarg.h>

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	*(count)++;
}

void	ft_putstr(char *str, int *count)
{	
	if (str == NULL)
		ft_putstr("(null)", len);
	while (*str != '\0')
	{
		ft_putchar(str, count);
		str++;
	}
}

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

void	ft_putnbr_u(unsigned int n, int *count)
{
	if (n < 10)
		ft_putchar(n + '0', count);
	else
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}

void	ft_putnbr_hex(unsigned int n, char s, int *count)
{
	char		*hex;
	
	if (s == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (n < 16)
		ft_putchar(hex[n], count);
	else
		ft_putnbr(n / 16, s, count);
		ft_putnbr(n % 16, s, count);
}

void	check_type(va_list argp, const char str, int *count)
{
	// Conversions to implement:
	//
	// %c - print a single character
	if (str == 'c')
		ft_putchar(var_arg(argp, int), count);
	// %s - printing a string
	else if (str == 's')
		ft_putstr(var_arg(argp, int), count);
	// %d && %i = base 10
	else if (str == 'd' || str == 'i')
		ft_putnbr(var_arg(argp, int), count);
	// %u Prints an unsigned decimal (base 10) number
	else if (str == 'u')
		ft_putnbr_u(var_arg(argp, unsigned int), count);
	// %% Prints a percent sign.
	else if (str == '%')
		ft_putchar('%', count);
	// %x Prints a number in hexadecimal (base 16) lowercase format.
	else if (str == 'x')
		ft_putnbr_base(var_arg(argp, unsigned int), str, count);
	// %X Prints a number in hexadecimal (base 16) uppercase format
	else if (str == 'X')
		ft_putnbr_base(var_arg(argp, unsigned int), str, count);
	// The void * pointer argument has to be printed in hexadecimal
	else if (str == 'p')
		
}

int	ft_printf(const char *str, ...)
{
	int	count;
	va_list	argp;

	c = 0;
	va_start(argp, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			check_type(argp, str, &count);
		}
		else
		{
			write(1, str, 1);
			count++;
		}
		str++;
	}
	return (count);
}

int	main()
{

	/*
	int	count;
	
	count = ft_printf("My name is %s im %d years old.", "Badr", 24);
	ft_printf("My name is %s im %d years old.", "Badr", 24);
	return (0);
	*/
	return (0);
}
