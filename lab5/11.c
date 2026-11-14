#include <stdio.h>

void splitEvenOdd(int arr[], int n) {
    int even[100], odd[100], e = 0, o = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even[e++] = arr[i];
        else odd[o++] = arr[i];
    }
    printf("Even Array: ");
    for (int i = 0; i < e; i++) printf("%d ", even[i]);
    printf("\nOdd Array: ");
    for (int i = 0; i < o; i++) printf("%d ", odd[i]);
    printf("\n");
}

int main() {
    int arr[] = {10, 15, 20, 25, 30};
    splitEvenOdd(arr, 5);
    return 0;
}