//Write function to input a value and find the sin of a given number
#include <stdio.h>
#include <math.h>

double findSin(double x)
{
    return sin(x);
}

int main()
{
    double x;

    printf("Enter a value in radians: ");
    scanf("%lf", &x);

    printf("sin(%lf) = %lf", x, findSin(x));

    return 0;
}