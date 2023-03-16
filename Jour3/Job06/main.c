#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    if (start >= end) {
        // Cas de base : on a parcouru toute la chaîne
        return 1;
    } else if (str[start] != str[end]) {
        // Si les caractères à chaque extrémité sont différents, ce n'est pas un palindrome
        return 0;
    } else {
        // Appel récursif en vérifiant la sous-chaîne qui exclut les extrémités
        return isPalindrome(str, start+1, end-1);
    }
}

int main() {
    char str[100];

    printf("Entrez une chaine de caractères : ");
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str)-1)) {
        printf("%s est un palindrome.\n", str);
    } else {
        printf("%s n'est pas un palindrome.\n", str);
    }

    return 0;
}
