//Write a function to check whether a number is a prime number

#include <stdio.h>

int prime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (prime(n) == 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}


