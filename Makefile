NAME = libftprintf.a
CC = clang
CFLAGS = -Wall -Wextra -Werror
LIB = ar -rcs
RM = rm -rf

SRCS = ft_printf.c srcs/ft_char.c srcs/ft_num.c srcs/ft_hitoa.c srcs/ft_pitoa.c \
	   srcs/ft_putchar.c srcs/ft_uitoa.c srcs/ft_hex.c srcs/ft_ptr.c srcs/ft_str.c \
	   srcs/ft_unum.c \

OBJS = $(SRCS:.c=.o)

all: libft $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I ./libft

$(NAME): $(OBJS)
	cp ./libft/libft.a $(NAME)
	$(LIB) $(NAME) $(OBJS)

clean:
	$(MAKE) -C libft clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C libft fclean
	$(RM) $(NAME)

libft:
	$(MAKE) -C libft

re: fclean all

.PHONY: all clean fclean libft re

