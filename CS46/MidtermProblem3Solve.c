/*

Name: Jonathon Michael Delemos

University: Sierra College

Course: CS46

//Assignment: Test program for midterm result verification

*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>





int main ( )
{

unsigned int f = 0, g = 0 , h = 0 ;
char data [30];


char *ptr = "My House Has 12 Solar Panels" ;


int count = 0 , i = 0;
int count1 = 0;
int count2 = 0;


while ( *ptr != '\0')

{

   if (isupper((int) *ptr))
   {count++ ;}
   if (islower((int) *ptr))
   {count1++ ;}
   if (isdigit((int) *ptr))
   {count2++ ;}


   ptr++;

}

printf ( "%d \n", count) ;
printf ( "%d \n", count1) ;
printf ( "%d \n", count2) ;



return 0;

}
