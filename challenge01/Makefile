CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=test_challenge01

all: $(NAME)

$(NAME): starter.c test_challenge01.c
	@$(CC) $(CFLAGS) -o $(NAME) starter.c test_challenge01.c
	./$(NAME)

clean:
	rm -f $(NAME)