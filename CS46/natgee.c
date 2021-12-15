#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX_QUESTIONS 25


int main  ( )  
{

srand ( time(NULL));

   unsigned char operand1, operand2, operator, operator2, response;
   unsigned char correct_answer;
   unsigned char correct1;
   unsigned char correct2;
   int i = 0;
   operand1 = rand ( ) % 10 ;
   operand2 = rand ( ) % 10 ;
   operator = rand ( ) % 3;
   operator2 = rand ( ) % 3;
   correct1 = 1;
   correct2 = 2;


printf ("\nWelcome to the assigned game!\n"); 
printf ("\nThe objective of the game is to identify the country a city resides in.\n");
printf ("\nIndicate your answer by pressing the number that correlates to the country.\n");
printf ("\nSome questions are easy, others are bit more difficult.\n");

printf ("\n Good luck!\n\n");

   switch ( operator ) {
      case 0:
         printf ( "Where is Rome? \n 1. Italy \n 2. Turkey \n 3. Canada \n 4. Brazil\n\n");
         correct_answer = correct1;

      break;
      case 1:
	 printf ( "Where is Manchester? \n 1. England \n 2. Sweden \n 3. Germany \n 4. Brazil\n\n");
         correct_answer = correct1;

      break;
      case 2:
         printf ( "Where is Moscow? \n 1. Russia \n 2. Turkey \n 3. Canada \n 4. Brazil\n\n");
         correct_answer = correct1;
      break;

    }

         scanf ( "%hhu", &response );
         if ( response == correct_answer )
	     {
             printf ( "\nGood Job\n\n");
             i++;
         }else
             printf ( "oh no\n");
	


   switch ( operator2 ) {
      case 0:
         printf ( "Where is Bejing? \n 1. China \n 2. Spain \n 3. Mongolia \n 4. Egypt\n\n");
         correct_answer = correct1;

      break;
      case 1:
	 printf ( "Where is Tokyo? \n 1. Japan \n 2. Turkey \n 3. Canada \n 4. Brazil\n\n");
         correct_answer = correct1;

      break;
      case 2:
         printf ( "Where is Prague? \n 1. Czech Republic \n 2. Turkey \n 3. Thailand  \n 4. Brazil\n\n");
         correct_answer = correct1;
      break;

    }

         scanf ( "%hhu", &response );
         if ( response == correct_answer )
	     {
             printf ( "\nGood Job\n\n");
             i++;
           
         }else
             printf ( "oh no\n");

   switch ( operator ) {
      case 0:
         printf ( "Where is New Orleans? \n 1. USA \n 2. France \n 3. Mexico \n 4. India\n\n");
         correct_answer = correct1;

      break;
      case 1:
	 printf ( "Where is the Nefud Desert? \n 1. Afghanistan \n 2. Saudi Arabia \n 3. Germany \n 4. Brazil\n\n");
         correct_answer = correct2;

      break;
      case 2:
         printf ( "Where is Buenos Aires? \n 1. Argentina \n 2. Zegema Beach \n 3. Klendathu \n 4. Terra\n\n");
         correct_answer = correct1;
      break;

    }

         scanf ( "%hhu", &response );
         if ( response == correct_answer )
	     {
             printf ( "\nGreat Job, Kid! \n\n");
             i++;
         }else
             printf ( "oh no\n");


   switch ( operator ) {
      case 0:
         printf ( "Where is Tehran? \n 1. Iran \n  \n 2. Canada \n 3. Brazil\n 4. Egypt\n\n");
         correct_answer = correct1;

      break;
      case 1:
	 printf ( "Where is Naples? \n 1. Italy \n 2. Turkey \n 3. Canada \n 4. Brazil\n\n");
         correct_answer = correct1;

      break;
      case 2:
         printf ( "Where is Bohemia? \n 1. Czech Republic \n 2. Turkey \n 3. Thailand  \n 4. Brazil\n\n");
         correct_answer = correct1;
      break;

    }

         scanf ( "%hhu", &response );
         if ( response == correct_answer )
	     {
             printf ( "\nKeep it up!\n\n");
             i++;
         }else
             printf ( "oh no\n");

   switch ( operator2 ) {
      case 0:
         printf ( "Where is Pompeii? \n 1. Italy \n  \n 2. Canada \n 3. Brazil\n 4. Egypt\n\n");
         correct_answer = correct1;

      break;
      case 1:
	 printf ( "Where is Petra? \n 1. Jordan \n 2. Turkey \n 3. Canada \n 4. Brazil\n\n");
         correct_answer = correct1;

      break;
      case 2:
         printf ( "Where is Venice ? \n 1. Italy \n 2. Turkey \n 3. Thailand  \n 4. Brazil\n\n");
         correct_answer = correct1;
      break;

    }

         scanf ( "%hhu", &response );
         if ( response == correct_answer )
	     {
	     i++;
             printf ( "\nWell done! \n\n");
           
         }else
             printf ( "oh no\n");


printf("Your total score is %d \n", i);



}