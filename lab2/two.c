// write a program get the student mark and print the grade depend on the table
#include <stdio.h>
 void main (void){
 int grade ;
   
 printf( " Please Enter Your grade \n ");
 scanf ("%d" , &grade);

    if ( grade < 50 ){
    printf( "Fail");
    }

    if ( grade>= 50 && grade <65 ){
    printf( "Pass");
    }

    if ( grade >= 65 &&  grade < 80 ){
    printf( "Good");
    }
    if ( grade> 80 &&  grade < 90 ){
    printf( "Very Good");
    }
    if ( grade > 90 ){
    printf( "Excellent");
    }


 }
