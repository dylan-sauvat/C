#include <stdio.h>

int main() {
    int a = 0;
    char b = 'B';
    char c[12] = "bonjour toi\n";

    printf("Adresse de a : %p\n", (void*)&a);
    printf("Adresse de b : %p\n", (void*)&b);
    printf("Adresse de c : %p\n", (void*)&c);

    return 0;
}
