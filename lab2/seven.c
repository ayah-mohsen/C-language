#include <stdio.h>

void main(void) {
    float income, tax ;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 7000) {
        tax = 0.0; // Exempted
    } 
    else if (income <= 20000) {
        tax = income * 0.10; // 10%
    } 
    else if (income <= 45000) {
        tax = income * 0.15; // 15%
    } 
    else if (income <= 200000) {
        tax = income * 0.20; // 20%
    } 
    else {
        tax = income * 0.40; // 40%
    }

    printf("Total Income Tax = %.2f\n", tax);

    
}