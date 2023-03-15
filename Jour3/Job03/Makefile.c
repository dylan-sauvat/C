CC=gcc
CFLAGS=-Wall -Wextra
SRCDIR=C/jobXX/
SRCS=$(wildcard $(SRCDIR)*.c)
OBJDIR=obj/
OBJS=$(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SRCS))
EXEC=my_make_evolve

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
