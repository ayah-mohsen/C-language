
#include <stdio.h>
 struct  student {
    int code; 
    char name[30];
    char gender ;
    int age;
 };
  
  int main (){ 
     struct  student st1, st2;

      printf ("Enter information of the first student \n");
      scanf (" %d", &st1.code);
      scanf (" %s", st1.name);
      scanf (" %c", &st1.gender);
      scanf (" %d", & st1.age);
       printf("\n ============\n");
     printf ("Enter information of the second student \n");
      scanf (" %d", &st2.code);
      scanf (" %s", st2.name);
      scanf (" %c", &st2.gender);
      scanf (" %d", & st2.age);
       printf("\n ============\n");

        if (st1.age > st2.age){
        printf("the first student ia the older");
        }
        else if (st1.age < st2.age)
        {
         printf("the second student ia the older");

        }

        return 0;
        

  }
 
