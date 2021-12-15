/*

Name: Jonathon Michael Delemos

University: Sierra College

Course: CS46

*/


#include <stdio.h>
#include <math.h>

int main (void)

{

    printf ("Please enter a number from 0 to 255 \n") ; // this is a prompt for a future scan
    int value ; // declaring the type of data
    scanf ("%d", &value) ; // gathering the input
    printf ("\n");

    #define VALUE_128 128

    #define VALUE_64 64

    #define VALUE_32 32

    #define VALUE_16 16

    #define VALUE_8 8

    #define VALUE_4 4

    #define VALUE_2 2

    #define VALUE_1 1

    int bit1 = value / VALUE_128 ;
    printf ("%d \n", bit1);   //    1st bit
    value = value %  VALUE_128 ;

    int bit2 = value / VALUE_64 ;
    printf ("%d \n", bit2) ;   // 2nd bit
    value = value %  VALUE_64;

    int bit3 = value / VALUE_32 ;
    printf  ("%d \n", bit3) ;  // 3rd bit
    value = value %  VALUE_32;

    int bit4 = value / VALUE_16 ;
    printf  ("%d \n", bit4) ; // 4th bit
    value = value %  VALUE_16;

    int bit5 = value / VALUE_8 ;
    printf ("%d \n", bit5) ;  // 5th bit
    value = value % VALUE_8 ;

    int bit6 = value / VALUE_4 ;
    printf ("%d \n" , bit6) ;  // 6th bit;
    value = value %  VALUE_4;

    int bit7 = value / VALUE_2 ;
    printf ("%d \n", bit7) ;  // 7th bit;
    value = value % VALUE_2;

    int bit8 = value / VALUE_1 ;
    printf ("%d \n", bit8) ; // 8th bit
    printf ("\n") ;



  printf ("%d %d %d %d %d %d %d %d \n", bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8) ; // 8bit

return 0 ;
}//end program
