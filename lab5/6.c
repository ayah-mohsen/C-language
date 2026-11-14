#include <stdio.h>

int binarySearch(int arr[], int low, int high, int val) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == val) return mid;
    if (arr[mid] > val) return binarySearch(arr, low, mid - 1, val);
    return binarySearch(arr, mid + 1, high, val);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int pos = binarySearch(arr, 0, 4, 40);
    printf("Position = %d\n", pos);
    return 0;
}