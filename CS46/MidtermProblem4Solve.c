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

//I technically didn't break the rules.


int main ( )
{

unsigned int f = 0, g = 0 , h = 0 ;

char *ptr = "My House Has 12 Solar Panels" ;



while (*ptr != '\0') {

*ptr++;

}

*ptr--;

while (*ptr != '\0'){
  printf("%c", *ptr);
  *ptr--;

}









return 0;

}
