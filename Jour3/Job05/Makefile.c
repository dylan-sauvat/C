#include <stdio.h>

void drawSquare(int size, int row, int col) {
    if (row < size) {
        if (col < size) {
            printf("*");
            drawSquare(size, row, col+1);
        } else {
            printf("\n");
            drawSquare(size, row+1, 0);
        }
    }
}

int main() {
    int width, height;

    printf("Enter the width of the square: ");
    scanf("%d", &width);

    printf("Enter the height of the square: ");
    scanf("%d", &height);

    if (width != height) {
        printf("Error: The width and height must be the same.\n");
        return 1;
    }

    drawSquare(width, 0, 0);

    return 0;
}
