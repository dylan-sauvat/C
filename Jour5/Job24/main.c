#include <stdio.h>

int count_A(char* str) {
    int count = 0;
    char* ptr = str;

    while (*ptr != '\0') {
        if (*ptr == 'A') {
            count++;
        }
        ptr++;
    }

    return count;
}

int main() {
    char str[] = "Alphabet";
    int num_A = count_A(str);

    printf("Le nombre d'occurrences de la lettre 'A' est %d\n", num_A);

    return 0;
}
