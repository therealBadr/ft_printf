#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *str, ...);
void ft_putchar(char c, int *count);
void ft_putstr(char *str, int *count);
void ft_putnbr(int n, int *count);
void ft_putnbr_u(unsigned int n, int *count);
void ft_putnbr_hex(unsigned int n, char s, int *count);
void	ft_putnbr_hex_long(unsigned long n, char s, int *count);
void ft_putaddr(void *ptr, int *count);

#endif

