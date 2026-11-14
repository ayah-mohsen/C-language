// // [5]  write a program that compute the sum of two integer  sum = ( num1 + num2)

#include <stdio.h>
void main(void){
int num1; 
int num2; 
int sum;
printf(" Please Enter the first number \t");
scanf("%d", &num1); 
printf("\n");
printf(" Please Enter the second number \t");
scanf("%d", &num2); 
printf("\n");

sum=  num1 + num2; 
printf("the sum of two integer =  %d  + %d = %d  " , num1 , num2 , sum);
}