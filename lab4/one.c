// Write a function to convert decimal number to binary number using iterative and recursion.


void binaryRecursive(int n)
{
    if (n > 1)
        binaryRecursive(n / 2);

    printf("%d", n % 2);
}

int main()
{
    int n;

    printf("Enter decimal number: ");
    scanf("%d", &n);
    printf("\nRecursive: ");
    binaryRecursive(n);
    return 0;
}



