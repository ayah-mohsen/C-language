#include <stdio.h>
void main ( void){


int amount;
int count50 , count25 , count10 , count5 , count1 ;
int total; 

printf("Enter the amount:\n ");
scanf("%d", &amount);


    count50 = amount / 50;
    amount = amount % 50;

     count25 = amount / 25;
     amount = amount % 25;

     count10 = amount / 10;
     amount = amount % 10;

     count5 = amount / 5;
     amount = amount % 5;

     count1 = amount / 1;
     amount = amount % 1;

     total = count50 + count25 + count10 + count5 + count1; 
     printf ("total is %d", total);
     

}