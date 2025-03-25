CC := gcc
CFLAGS := -Wall -Wextra -Wvla -fsanitize=address,undefined -g


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@