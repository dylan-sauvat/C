#include <stdio.h>

void my_swap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1, num2;
    printf("Entrez deux nombres entiers : ");
    scanf("%d %d", &num1, &num2);

    printf("Avant l'échange : num1 = %d, num2 = %d\n", num1, num2);
    my_swap(&num1, &num2);
    printf("Après l'échange : num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
