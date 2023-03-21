#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *add(char *a, char *b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int max_len = len_a > len_b ? len_a : len_b;

    char *result = malloc(max_len + 2);
    result[max_len + 1] = '\0';

    int carry = 0;
    for (int i = 0; i <= max_len; i++) {
        int digit_a = i < len_a ? a[len_a - i - 1] - '0' : 0;
        int digit_b = i < len_b ? b[len_b - i - 1] - '0' : 0;
        int sum = digit_a + digit_b + carry;
        result[max_len - i] = (sum % 10) + '0';
        carry = sum / 10;
    }

    if (result[0] == '0') {
        memmove(result, result + 1, max_len + 1);
    }

    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s a b\n", argv[0]);
        return 1;
    }

    char *a = argv[1];
    char *b = argv[2];

    char *result = add(a, b);

    printf("%s + %s = %s\n", a, b, result);

    free(result);

    return 0;
}
