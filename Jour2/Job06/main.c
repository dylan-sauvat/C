#include <stdio.h>
#include <stdlib.h>

// fonction pour convertir un tableau d'entiers représentant les valeurs ASCII en une chaîne de caractères
char *ascii_to_char(int *ascii, int len) {
    char *str = malloc(sizeof(char) * (len + 1));

    for (int i = 0; i < len; i++) {
        str[i] = (char)ascii[i];
    }
    str[len] = '\0';

    return str;
}

int main() {
    int ascii[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33}; // "Hello, World!"
    int len = sizeof(ascii) / sizeof(int);
    char *str;

    str = ascii_to_char(ascii, len);

    printf("Chaîne de caractères : %s\n", str);

    free(str);

    return 0;
}
