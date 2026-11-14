#include <stdio.h>

void separateEvenOdd(int arr[], int n) {
    printf("Even: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) printf("%d ", arr[i]);
    }

    printf("\nOdd: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    separateEvenOdd(arr, n);

    return 0;
}