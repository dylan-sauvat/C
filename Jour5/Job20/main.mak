CC = gcc
CFLAGS = -Wall
drawsquare: drawsquare.c
    $(CC) $(CFLAGS) -o drawsquare drawsquare.c
clean:
    rm -f drawsquare
$ make
$ make clean
