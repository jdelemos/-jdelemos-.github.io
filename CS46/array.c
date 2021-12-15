
/*

Name: Jonathon Michael Delemos

University: Sierra College

Course: CS46

*/

#include <stdio.h>
#include <math.h>



unsigned char  dataC [] = { 65, 70, 75, 80, 85 };

unsigned short dataS [] = {0x6565, 0x7070, 0x7575, 0x8080, 0x8585 };

unsigned int dataInt [] = { 0x0A0B0C0D, 0x01020304, 0x05060708, 0xA0A1A2A3 } ;


int nCells = 5;
int nCellsInt = 4;
int i;

int main ( ) {

	printf("\n\nProblem 1a\n\n");

	for ( int i = 0 ; i <nCells ;    )    //  1a

        {
            printf ( "address of index %d =%p \n", i,  &dataC[i] ) ; ;

            i++ ;

        }

	printf ("\n\nProblem 1b \n\n");

	for ( int i = 0 ; i <nCells ;    )   // 1b.  Print the values of each cell in dataC

        {
            printf ( "value of index %d =%d \n", i,  dataC[i] ) ; ;

            i++ ;
        }

	printf ("\n\nProblem 2a \n\n");
	printf ("My best guess is the data is stored differently based off how it is declared. Short versus char.\n\n");

	 i = 0 ;

         while ( i <nCells ) {

         printf ( "%d %p \n", i, &dataS[ i ] ) ;

         i++ ;

         }

	printf("\n\nProblem 2b - Hex Format\n\n");


	 i = 0 ;

         while ( i <nCells ) {

         printf ( "%x %x \n", i, dataS[ i ] ) ;

         i++ ;

         }


	printf("\n\nProblem 3a -Print address using any loop\n\n");

	for ( int i = 0 ; i <nCells ;    )    //  1a

        {
            printf ( "address of index %d =%p \n", i,  &dataInt[i] ) ;

            i++ ;

        }

	 printf("\n\nProblem 3b - dataInt Hex Format\n\n");

	 i = 0 ;

         while ( i <nCellsInt ) {

         printf ( "%x %x \n", i, dataInt[ i ] ) ;

         i++ ;

	 }




	//problem 4

	unsigned int total = sizeof (dataC)  /  sizeof (dataC [ 0 ]) ;
        unsigned int size = sizeof (dataC) ;

	printf("\n\nProblem 4 - Print the size and total of each array\n\n");

	printf ( "size of cells = %d \n", size );
	printf ( "number of cells = %d \n",  total  ) ;



	//problem 5

	unsigned int total1 = sizeof (dataS)  /  sizeof (dataS [ 0 ]) ;
        unsigned int size1 = sizeof (dataS) ;

	printf("\n\nProblem 5 - Print the size and total of each array\n\n");

	printf ( "size of cells = %d \n", size1 );
	printf ( "number of cells = %d \n",  total1  ) ;



        //problem 6

	unsigned int total2 = sizeof (dataInt)  /  sizeof (dataInt [ 0 ]) ;
        unsigned int size2 = sizeof (dataInt) ;

	printf("\n\nProblem 5 - Print the size and total of each array\n\n");

	printf ( "size of cells = %d \n", size2 );
	printf ( "number of cells = %d \n",  total2  ) ;







// end program


return 0;
}
