/*
#include <stdio.h>

int main() {
    int n;
    float number;
    float max, min;
    float range;

    printf("Enter the number of float values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements must be greater than 0.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%f", &number);
    max = number;
    min = number;

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &number);

        if (number > max) {
            max = number;
        }
        if (number < min) {
            min = number;
        }
    }

    range = max - min;

    printf("\nMaximum value: %.2f\n", max);
    printf("Minimum value: %.2f\n", min);
    printf("Range (Maximum - Minimum): %.2f\n", range);

    return 0;
}
    */
    #include <stdio.h>
    
    int main (){
        int n; 
        float num; 
        float min; 
        float max;
        float range;
        int i;

        printf("Enter the numbers ");
        scanf("%d" , &n);

        printf ("Enter the first number : ");
        scanf ("%f" , &num);
         max = num;
         min= num;
         for ( i = 2; i <=  n ; i++)
         {
            printf("Enter the next number :");
            scanf("%f", &num);
              if ( num >= max){
                max = num;

              }
              if ( num <= min){
                min = num;
                
              }

          
         }
          range = max - min;
          printf("the range is : %.2f" , range);
         
      return 0 ;
    }