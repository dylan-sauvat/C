#include <stdio.h>

void find_min_max(int arr[], int size, int* min, int* max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {10, 22, 1, 25, 85, 12, 35, 264, 145};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    find_min_max(arr, size, &min, &max);

    printf("Le minimum est %d\n", min);
    printf("Le maximum est %d\n", max);

    return 0;
}
