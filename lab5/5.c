#include <stdio.h>

int linear(int arr[], int n, int val) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int pos = linear(arr, 5, 30);
    printf("Pos = %d\n", pos);
    return 0;
}