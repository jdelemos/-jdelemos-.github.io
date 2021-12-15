#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {

struct stat status;
int ret = stat(argv[1], &status);

if (ret == -1) {

  fprintf(stderr, "Can't open file %s", argv[1]);
  perror(NULL);
  exit(1);

}


int size = status.st_size;
printf("%d\n", size);



// loads the file into an array
FILE *w = fopen(argv[1], "r");

if (!w) {

  fprintf(stderr, "Can't read file %s", argv[1]);
  perror(NULL);
  exit(1);

}

char *contents = malloc(size);
fread(contents, size, 1, w); 
fclose(w); 


int wordcount = 0; 
for (int i = 0; i< size; i++){

if (contents[i] == '\n') wordcount++; 

}

printf("Number of words = %d\n", wordcount); 

char *words [wordcount]; 
char ** words = malloc(wordcount * sizeof(char*)); 

//loop through contents array 
//store where each word begins 
// replace new line with null character 


}
