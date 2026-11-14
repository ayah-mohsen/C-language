/*
#include <stdio.h>

int main() {
    int n;          
    int number;      
    int min;        

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements must be greater than 0.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &min);

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number < min) {
            min = number;
        }
    }

    printf("\nThe minimum number is: %d\n", min);

    return 0;
}
    */
   #include <stdio.h>

   int main (){
    int n ; 
    int num; 
    int min; 
    int i; 
     printf("Enter the numbers of integer: ");
     scanf("%d", &n);
    
     printf("\n");

     printf("Enter the first number");
     scanf("%d", &num);

     for ( i = 2; i <= n; i++)
     {
       printf("Enter the next numbers:");
       scanf("%d", &min);
       if ( num <= min){
        min = num;
       }

     }
     
               printf("the minimum is : %d" , min);

      return 0;

   }