
CC=gcc
CFLAGS=-Wall -Wextra -Werror
EXEC=my_first_make

SRCS=my_put.c main.c
OBJS=$(SRCS:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
