
/*

Name: Jonathon Michael Delemos

University: Sierra College

Course: CS46

*/

#include <stdio.h>
#include <math.h>

#define VALUE_128  128
#define VALUE_64  64
#define VALUE_32  32
#define VALUE_16  16
#define VALUE_8  8
#define VALUE_4  4
#define VALUE_2  2
#define VALUE_1  1


int main () {


    printf ("Please enter a number from 0 to 255\n"); // prompt for the conversion number
    int value=0; // inititalization/declaration of value used in future calculation
    scanf ( "%d", &value); // the scan

    int zero = 0;
    int one = 1;




    if ( value >= VALUE_128 )
	{
	printf  ("%d \n", one);
        value = value - VALUE_128;
	}

    else // print a zero
	{
        printf("%d \n", zero);
	}

    if ( value >= VALUE_64 )
	{
        printf  ("%d \n", one);
        value = value - VALUE_64;
        }

    else
	{
        printf ("%d \n", zero);
        }

    if ( value >= VALUE_32 )
	{
        printf  ("%d \n", one);
        value = value - VALUE_32;
        }

    else
	{
        printf("%d \n", zero);
        }

    if (value >= VALUE_16) // if remainder greater than 16, print 1
	{
        printf ("%d \n", one);
        value = value - VALUE_16;
        }

    else
	{
        printf ("%d \n", zero);
        }

    if ( value >= VALUE_8 ) // if remainder greater than 8, print 1
	{
        printf ("%d \n", one);
        value = value - VALUE_8;
        }
    else
        {
	printf("%d \n", zero);
	}

    if ( value >= VALUE_4 ) // if remainder greater than 4, print 1
	{
        printf ("%d \n", one);
        value = value - VALUE_4;
        }

    else
	{
	printf("%d \n", zero);
        }

    if ( value >= VALUE_2 ) // if remainder greater than 2, print 1
	{
        printf ("%d \n", one);
        value = value - VALUE_2;
        }

    else
	{
        printf("%d \n", zero);
        }


    if ( value >= VALUE_1 )
       {
       printf ("%d \n", one);
       value = value - VALUE_1;
       }

    else
       {
       printf("%d \n", zero);
       }
return 0;

} // end program
