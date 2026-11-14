// // [7]  write a program that determine number odd or even

#include <stdio.h>

void main(void) {

    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is an even number:\n", number);
    } else {
        printf("%d is an odd number:n", number);
    }

}