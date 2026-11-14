#include <stdio.h>

int sumIterative(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int sumRecursive(int arr[], int n) {
    if (n <= 0) return 0;
    return arr[n - 1] + sumRecursive(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("Iterative Sum = %d\n", sumIterative(arr, 5));
    printf("Recursive Sum = %d\n", sumRecursive(arr, 5));
    return 0;
}