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



/*

2.

Prompt the user to enter a string of characters.  Use getchar to read each and every character
Check if the paraphrase contains all vowels: a e i o u
if one or more vowels are missing, then print "string entered is invalid"
otherwise, print "string successfully accepted"

*/



#include <stdio.h>

int main ( )
{


unsigned char a = 0, e = 0 , i = 0 , o = 0, u = 0;
char ch = '\0' ; // NULL Terminator

printf ("Enter a text and hit enter key \n");


while ( ch != '\n' ) {


ch = getchar() ;
if ( ch == 'a' || ch == 'A' )
    a = 1;
else if ( ch == 'e' || ch == 'E' )
    e = 1 ;
else if ( ch == 'i' || ch == 'I' )
    i = 1 ;
else if ( ch == 'o' || ch == 'O' )
   o = 1 ;
else if ( ch == 'u' || ch == 'U' )
   u = 1 ;


}

if ( a >= 1 && e > 0 && i && o == 1 && u != 0 )
     printf ( "string successfully accepted\n");
else
     printf ( "string entered is invalid \n");

return 0;
}
