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


unsigned char f = 0, g = 0 , h = 0 ;
int count = 0;
char ch = '\0' ; // NULL Terminator

printf ("Enter a Password and hit enter key \n");


while ( ch != '\n' ) {


ch = getchar() ;
if (isupper(ch) )
    f = 1;
if (islower(ch) )
    g = 1 ;
if (isdigit(ch) )
    h = 1 ;
count ++;

}


if ( f >= 1 && g > 0 && h >0 && count > 7)
     printf ( "Password successfully accepted\n");
else
     printf ( "Password is not valid\n");

return 0;

}
