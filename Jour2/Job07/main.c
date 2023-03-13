#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_ea(char* str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i') {
            count++;
        }
    }
    return count;
}

int main() {
    char word[100];
    printf("Entrez un mot : ");
    scanf("%s", word);
    int count = count_ea(word);
    printf("Le nombre de 'a', 'e' et 'i' dans le mot est : %d\n", count);
    return 0;
}
