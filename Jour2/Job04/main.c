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
        return -1; // renvoie -1 pour indiquer une division par zéro
    }
}

// fonction pour le modulo
int my_mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        return -1; // renvoie -1 pour indiquer un modulo avec zéro
    }
}

// fonction pour la puissance
int my_pow(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int a, b;
    char sign;

    printf("Entrez le premier nombre : ");
    scanf("%d", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);

    printf("Quelle opération souhaitez-vous effectuer (+, -, *, /, %% ou ^) ? ");
    scanf(" %c", &sign);

    switch(sign) {
        case '+':
            printf("a + b = %d\n", my_add(a, b));
            break;
        case '-':
            printf("a - b = %d\n", my_sub(a, b));
            break;
        case '*':
            printf("a * b = %d\n", my_mul(a, b));
            break;
        case '/':
            if (my_div(a, b) == -1) {
                printf("Erreur : division par zéro\n");
            } else {
                printf("a / b = %f\n", my_div(a, b));
            }
            break;
        case '%':
            if (my_mod(a, b) == -1) {
                printf("Erreur : modulo avec zéro\n");
            } else {
                printf("a %% b = %d\n", my_mod(a, b));
            }
            break;
        case '^':
            printf("a ^ b = %d\n", my_pow(a, b));
            break;
        default:
            printf("Opération non reconnue\n");
    }

    return 0;
}
