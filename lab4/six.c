//Write function to input a number and find the factorial of a given integer using iterative and recursion
#include <stdio.h>

int factorialIterative(int n)
{
    int result = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}

int factorialRecursive(int n)
{
    if (n == 0)
        return 1;

    return n * factorialRecursive(n - 1);
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Iterative = %d\n", factorialIterative(n));

    printf("Recursive = %d\n", factorialRecursive(n));

    return 0;
}