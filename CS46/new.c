#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>



void reverseString(char* str)
{
    int l, i;
    char *begin_ptr, *end_ptr, ch;
    int index = 28;

    // Set the begin_ptr and end_ptr
    // initially to start of string
    begin_ptr = str;
    end_ptr = str;

    // Move the end_ptr to the last character
    for (i = 0; i < 28 - 1; i++)
        end_ptr++;

    // Swap the char from start and end
    // index using begin_ptr and end_ptr
    for (i = 0; i < 28 / 2; i++) {

        // swap character
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;

        // update pointers positions
        begin_ptr++;
        end_ptr--;
    }
}

int main()
{

    char *ptr = "My House Has 12 Solar Panels" ;
    // Reverse the string
    reverseString(ptr);

    // Print the result
    printf("Reverse of the string: %s\n", *ptr);

    return 0;
}
