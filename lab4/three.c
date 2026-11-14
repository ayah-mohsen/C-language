//Write a function to swap two numbers using function.
#include <stdio.h>

int a, b;

void swap()
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap();

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}