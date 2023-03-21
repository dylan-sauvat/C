#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s x y\n", argv[0]);
        return 1;
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    if (x <= 0 || y <= 0) {
        printf("Error: x and y must be strictly positive integers.\n");
        return 1;
    }

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
