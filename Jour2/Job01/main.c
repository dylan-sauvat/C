#include <stdio.h>

// fonction pour l'addition
int my_add(int a, int b) {
    return a + b;
}

// fonction pour la soustraction
int my_sub(int a, int b) {
    return a - b;
}

// fonction pour la multiplication
int my_mul(int a, int b) {
    return a * b;
}

// fonction pour la division
float my_div(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Division par zéro impossible\n");
        return 0;
    }
}

// fonction pour le modulo
int my_mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Modulo avec 0 impossible\n");
        return 0;
    }
}

int main() {
    int a = 10, b = 3;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", my_add(a, b));
    printf("a - b = %d\n", my_sub(a, b));
    printf("a * b = %d\n", my_mul(a, b));
    printf("a / b = %f\n", my_div(a, b));
    printf("a %% b = %d\n", my_mod(a, b));

    return 0;
}
