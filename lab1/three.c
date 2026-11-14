
// // [3]  write a program that compute the area of circle  ( radius r is pi r*2 )
 #include <stdio.h>
 void main (void){
    
     float radius ; 
     float area; 

     printf(" please give me the radius \t");
     scanf("%f" , &radius) ;

     area =  3.14 * radius * radius;

     printf(" the area of circle = %f " , area );
 }