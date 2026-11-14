#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    int max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    printf("Maximum element = %d\n", max);

    free(arr);
    return 0;
}