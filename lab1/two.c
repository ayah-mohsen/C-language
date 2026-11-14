// // [2]  write a program that compute the area of rectangle  ( length * width)

#include <stdio.h>

void main(void){
float length; 
float width ; 
float area;
printf(" Please give me the length \t");
scanf("%f", &length); 
printf("\n");

printf(" Please give me the width \t");
scanf("%f", &width); 
printf("\n");

area =length * width ; 
printf("the area of rectangle  = %f " , area);

}