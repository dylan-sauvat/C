#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int sum = *ptr1 + *ptr2;

    printf("La somme de %d et %d est %d\n", *ptr1, *ptr2, sum);

    return 0;
}
