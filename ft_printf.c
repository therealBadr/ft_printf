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
	//else if ()
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
