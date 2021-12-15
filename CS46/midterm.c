/*

Name: conathon Michael Delemos

University: Sierra College

Course: CS46

//Assignment: Test program for midterm result verification

*/

/*
5. Print  every other prime numbers from 2 to 100.

Your output should be:

2 ,  5,  11,  17,  23,  31,  41,  47,  59,  67,  73,  83,  97


*/


#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

#include <stdio.h>

int main()
{
    int i;
    int j;
    int start;
    int end;
    int isPrime;
    start = 2;
    end = 100;



    if(start < 2)
        start = 2;

    for(i=start; i<=end; i++) {

        isPrime = 1;

        for(j=2; j<=i/2; j++) {

            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
