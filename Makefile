SRCS	= ft_printf.c ft_printf_char.c ft_printf_string.c \
		ft_printf_unsigned.c ft_printf_decimal.c ft_printf_integer.c \
		ft_printf_hexlower.c ft_printf_hexupper.c

OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(OBJSB)

re: fclean all

bonus: $(OBJSB) $(OBJS)
	ar -rc $(NAME) $(OBJSB) $(OBJS)

.PHONY: clean fclean re all bonus
