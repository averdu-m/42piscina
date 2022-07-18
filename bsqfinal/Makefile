NAME = bsq
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src/
INC_DIR = includes/
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I $(INC_DIR) $(OBJ) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
