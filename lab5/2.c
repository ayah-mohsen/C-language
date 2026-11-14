#include <stdio.h>

void insertSorted(int arr[], int n, int val) {
    int i = n - 1;
    while (i >= 0 && arr[i] > val) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = val;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5, val = 25;

    insertSorted(arr, n, val);
    n++;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}