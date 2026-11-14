//[6]  write a program that determine number positive or negative positive or zero

#include <stdio.h>

void main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a POSITIVE number.\n", number);
    } else if (number < 0) {
        printf("%d is a NEGATIVE number.\n", number);
    } else {
        printf("The number is ZERO.\n");
    }
}
