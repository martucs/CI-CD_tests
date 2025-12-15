CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=test_challenge02

all: $(NAME)

$(NAME): starter.c test_challenge02.c
		@$(CC) $(CFLAGS) -o $(NAME) starter.c test_challenge02.c
		./$(NAME)

clean:
	rm -f $(NAME)