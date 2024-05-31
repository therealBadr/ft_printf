NAME = libftprintf.a
SRCS = ft_printf.c ft_putaddr.c ft_putchar.c ft_putnbr.c \
       ft_putnbr_hex.c ft_putstr.c ft_putnbr_u.c
OBJS = $(SRCS:.c=.o)
HEADER = ft_printf.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

