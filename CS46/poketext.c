/*
Name: Jonathon Michael Delemos
Community College: Sierra Rocklin College
Date: 11/1/2021
Assignment: General Programming Practice
*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


typedef struct pokemon {
    char name[20];
    int hp;
    char type [20];
} pokemon;

//creating alias for struct
typedef struct pokemon pokemon;



//method to print pokemon
void printPokemon(pokemon p) {
    printf("%s %d %s", p.name, p.hp, p.type);
}



//main program
int main (int argc, char *argv[]) {

//in this method we check to see if args match our method
//else we exit as seen


//now we are good to open the file
//we assign the file to a value
FILE *pf = fopen(argv[1], "pokedex");

//if not file we exit
    if (!pf)  {
        fprintf(stderr, "cannot open %s", argv[1]);
        exit(1);
    }

//data declarations
pokemon pokedex[10];
int count = 0;
char line [100];

      //this conditional statement obtains the data
      while (fgets (line , 100, pf) != NULL) {
          sscanf(line, "%[^,], %d, %s", pokedex[count].name, &pokedex[count].hp, pokedex[count].type);
          count++;
      }//end while

//close file
fclose(pf);

    //this loop is used to print the pokemon
    for (int i= 0;  i < count; i++)  {
        printf("%d: ", i);
        printPokemon(pokedex[i]);
        printf("\n");
    }//end for

//data declarations
char target[20];
printf("\n\nPlease enter in a desired search: \n\n");
fgets(target, 20, stdin);

char *nl = strchr(target, '\n');

    //this is to create a end of the line scenario outcome
    if (nl) *nl = '\0';// odd situation where there are no statements

    //run through a loop to find the desired pokemon
    for (int i= 0;  i < count; i++) {

    //compare target name with pokedex
    if (strcmp(target, pokedex[i].name)==0) {
        printf("Found: ");
        printPokemon(pokedex[i]);
        printf("\n");
    }//end if

}// end for


return 0;
}// end main
