FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = $(FILES:%.c=$(SRC_DIR)/%.c)
OBJS = $(SRCS:%.c=%.o)
SRC_DIR = srcs
INC_DIR = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: libft.a

libft.a: $(OBJS)
	ar -cr libft.a $^

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o $@ $<

$(SRCS):
	touch $@

re: fclean all

fclean: clean
	rm -f libft.a

clean:
	rm -f $(OBJS)
