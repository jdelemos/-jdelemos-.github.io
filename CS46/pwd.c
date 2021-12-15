
#include <stdio.h>
#include <math.h>
#include <string.h>





typedef struct _name {

   char name [13];

   int age;

} name ;




void printTheStatesUsingArrowOperator (   struct _name *qList,  int count   )

{


  name *ptr = qList ;
  int i = 0 ;
          for ( i = 0 ; i < count ; i++)  {
              printf ( " %s %d \n", ptr->name, ptr->age );
              ptr++;
          }



}



#include <stdio.h>

int main ( )

{

name person[3] = {  "John", 43, "Cathy",  54, "Sam", 21 } ;

void printTheStatesUsingArrowOperator ( person,  int 3  );

return 0;
}
