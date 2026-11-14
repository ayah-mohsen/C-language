// write a program determine number positive or negative or zero
 #include <stdio.h>
 void main (void){
   int num ;
    
   printf ( " Please Enter your number\n ");
   scanf("%d" , &num); 
    if ( num > 0 ){
       printf ( " %d is positive " , num );
    }
     if ( num < 0){
       printf ( " %d is negative  ", num );
    }
     if ( num == 0 ){
       printf ( " zero ");
    }

 }


