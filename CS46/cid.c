
#include <stdlib.h>
#include <unistd.h>

int main ( )
{
  int pid = fork () ;
  // a clone happens and returns
  if ( pid == 0 ) {

     printf ( "I am the child process, my process id is %d \n", getpid( ) );
     printf ( " who is my parent %d \n", getppid ( ) );
     sleep ( 60 );

  }
