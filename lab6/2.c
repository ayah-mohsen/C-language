#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr = arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Elements in array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}