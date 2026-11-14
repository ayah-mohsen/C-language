/*
#include <stdio.h>
  void main (void){

 int num; 

 printf (" Please Enter Your number : ");
 scanf("%d" , &num);
  if (num == 0){
    printf("zero");

  }
    if (num >= 1){
    printf("%d  is a positive number "  , num );

  }
    if (num < 0) {
    printf("%d  is a negative number " , num);

  }

  }
  */
 /*
#include <stdio.h>
void main ( void){

int grade;

printf("Please Enter Your Grade \n");
scanf("%d" , &grade);
if ( grade <50){
    printf("fail");
}
if ( grade >= 50 && grade < 65){
    printf("Pass");

}
if ( grade >= 65 && grade < 80){
    printf(" good");

}
if ( grade >= 80 && grade < 90){
    printf("very good");

}
if (  grade > 90){
    printf("Exellent");

}



}
*/
/*
 #include <stdio.h>
 void main (void){
   int num; 

       printf("Enter Your number \n ");
       scanf("%d" , &num);

     if ( num == 0){
        printf ("zero");
     }
     

     else if (num < 20){

         if (num == 1 ) printf("one\n");
         else if (num ==2) printf("two\n");
         else if (num ==3) printf("three\n");
         else if (num ==4) printf("four\n");
         else if (num ==5) printf("five\n");
      } 
      else if ( num <= 90){
            int tens =  num / 10;

            if ( tens == 2) printf("twenty");
            else if (tens ==3) printf("thirty");
            else if (tens ==4) printf("fourty");
            else if (tens ==5) printf("fifty");
            else if (tens ==6) printf("sixty");
            
             int ones=  num % 10;
            if ( ones == 1) printf("one");
            else if (tens ==2) printf("two");
            else if (tens ==3) printf("three");
            else if (tens ==4) printf("four");
            else if (tens ==5) printf("five");

      }
       else {
           printf("the number does not between 0 ...99" );
           


       }
     
    }

    */
   #include <stdio.h>
   void main ( void){
    int income ; 
    int tax ;
     
    printf("Please Enter Your income : \n");
    scanf("%d", &income);

    if ( income <= 7000){

     tax = income * .10;
      printf("%d" , tax);
    }

       if ( income >= 7000 && income < 20000){

       tax = income * .20;
       printf("%d" , tax);

    }
       if ( income >20000 && income < 450000){

          tax = income * .30;
          printf("%d" , tax);
    }
   



   }








