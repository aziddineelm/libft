NAME = main
CC = cc
FLAG = -Wall -Wextra -Werror


SRC = main.c test.c
OBJ = $(SRC:%.c=%.o)

build: $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
