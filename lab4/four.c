//Write a function to input a number from user and find power of given number using iterative and recursion
#include <stdio.h>

int powerIterative(int base, int exponent)
{
    int result = 1;
    int i;

    for (i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    return result;
}

int powerRecursive(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    return base * powerRecursive(base, exponent - 1);
}

int main()
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    
    scanf("%d", &exponent);

    printf("Iterative = %d\n", powerIterative(base, exponent));

    printf("Recursive = %d\n", powerRecursive(base, exponent));

    return 0;
}