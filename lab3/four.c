#include <stdio.h>

int main() {
    int n;
    int number;
    int max, min;
    int second_max, second_min;

    printf("Enter the number of integers (must be at least 4): ");
    scanf("%d", &n);

    if (n < 4) {
        printf("Invalid input. You need at least 4 numbers to exclude two extremes.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &number);
    max = min = number;

    printf("Enter number 2: ");
    scanf("%d", &number);

    if (number > max) {
        second_max = max;
        max = number;
        second_min = number;
    } else {
        second_max = number;
        min = number;
        second_min = max;
    }

    for (int i = 3; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number > max) {
            second_max = max;
            max = number;
        } else if (number > second_max) {
            second_max = number;
        }

        if (number < min) {
            second_min = min;
            min = number;
        } else if (number < second_min) {
            second_min = number;
        }
    }

    int range = second_max - second_min;

    printf("\nOriginal Maximum: %d (Excluded)\n", max);
    printf("Original Minimum: %d (Excluded)\n", min);
    printf("New Maximum (second highest): %d\n", second_max);
    printf("New Minimum (second lowest): %d\n", second_min);
    printf("Range without extremes: %d\n", range);

    return 0;
}
