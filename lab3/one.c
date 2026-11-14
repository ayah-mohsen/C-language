
#include <stdio.h>

int main() {
    int n;          
    int number;      
    int max;        

    
    printf("Enter the number of integers: ");
    scanf("%d",&n);

    
    if (n <= 0) {
        printf("Invalid input. Number of elements must be greater than 0.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &max);

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i) ;
        scanf("%d", &number);

        if (number > max) {
            max = number;
        }
    }

    printf("\nThe maximum number is: %d\n", max);

    return 0;
}









