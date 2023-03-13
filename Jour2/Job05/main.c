#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// fonction pour convertir une chaîne de caractères en un tableau d'entiers représentant les valeurs ASCII de chaque caractère
int *char_to_ascii(char *str) {
    int len = strlen(str);
    int *ascii = malloc(sizeof(int) * len);

    for (int i = 0; i < len; i++) {
        ascii[i] = (int)str[i];
    }

    return ascii;
}

int main() {
    char str[100];
    int *ascii;

    printf("Entrez une chaîne de caractères : ");
    scanf("%s", str);

    ascii = char_to_ascii(str);

    printf("Valeurs ASCII de la chaîne \"%s\" : ", str);
    for (int i = 0; i < strlen(str); i++) {
        printf("%d ", ascii[i]);
    }
    printf("\n");

    free(ascii);

    return 0;
}
