CC = gcc
CFLAGS = -Wall
palindrome: palindrome.c
    $(CC) $(CFLAGS) -o palindrome palindrome.c
clean:
    rm -f palindrome
$ make
$ make clean
