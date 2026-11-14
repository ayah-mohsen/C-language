#include <stdio.h>

int main() {
    int decimal_number;
    int base;
    char result[64];
    int index = 0;

    printf("Enter a decimal integer: ");
    scanf("%d", &decimal_number);

    printf("Enter the target base (e.g., 2, 8, 16): ");
    scanf("%d", &base);

    if (base < 2 || base > 36) {
        printf("Invalid base! Please enter a base between 2 and 36.\n");
        return 1;
    }

    if (decimal_number == 0) {
        printf("Converted number: 0\n");
        return 0;
    }

    int temp = decimal_number;

    while (temp > 0) {
        int remainder = temp % base;

        if (remainder < 10) {
            result[index] = remainder + '0';
        } else {
            result[index] = (remainder - 10) + 'A';
        }

        index++;
        temp = temp / base;
    }

    printf("Number %d in base %d is: ", decimal_number, base);
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");

    return 0;
}