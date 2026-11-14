// // [4]  write a program that compute the area of triangle  ( .5 * base * height)


#include <stdio.h>

void main(void){
int base; 
int height ; 
int area;
printf(" Please give me the base \t");
scanf("%d", &base); 
printf("\n");

printf(" Please give me the height \t");
scanf("%d", &height); 
printf("\n");

area =.5 * base * height ; 
printf("the area of triangle = %d " , area);
}