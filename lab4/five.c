//Write a function to Sum of Natural Numbers using iterative and recursion
#include <stdio.h>

int sumIterative(int n)
{
    int sum = 0;
    int i;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
}

int sumRecursive(int n)
{
    if (n == 0)
        return 0;

    return n + sumRecursive(n - 1);
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Iterative = %d\n", sumIterative(n));

    printf("Recursive = %d\n", sumRecursive(n));

    return 0;
}