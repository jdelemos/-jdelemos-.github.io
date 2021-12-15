#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_COMMANDS 6
int main(int argc, char *argv[])
{
     int temp0 = dup(0);

     // TASK 1 What is this line doing here
     int temp1 = dup(1);  // TASK 1
     // You are creating a copy of temp0 called temp1;
     //we want to be able to duplicate processes to child and run sep commands

     int restoreFd;
     int i;

   for ( i = 0; i < MAX_COMMANDS; i++ ) {
           if ( i == 0 ) {
              int fd[2];
              pid_t cpid;

              // create a pipe
              if (pipe(fd) == -1) {
                  perror("pipe");
                  exit(EXIT_FAILURE);
              }

              // TASK 2  Why are we using fd[1], not fd[0]
              dup2(fd[1], 1);
              close (fd[1]);
              // fd1 is the stdout
              //also we are passing the out to the child

              // TASK 3 Why do we need this line here
              restoreFd = fd[0];
              //we are feeding the restoreFd to the grep
              //that is to say we are assigning the restoreFd variable back to the grep

              cpid = fork();
              if (cpid == -1) {
                   perror("fork");
                   exit(EXIT_FAILURE);
              }

              if (cpid == 0) {
                execl("/usr/bin/ls", "ls", "-l", (char *)NULL);
                perror ( "execl ls  ");
              }

           }
            else if ( i == MAX_COMMANDS-1 ) {
              dup2(restoreFd,0);
              close (restoreFd);
              pid_t cpid;

              // TASK 4
              // Why no pipe is created
              // for last command we don't need a pipe
              //there isn't an avenue that is needed to pipe info through
              //info goes straight to screen

              cpid = fork();
              if (cpid == -1) {
                   perror("fork");
                   exit(EXIT_FAILURE);
              }

              if (cpid == 0) {

                // TASK 5: Why do we need this line here
                dup2(temp1,1); // restoring the stdout from temp1
                //we are turning temp1 to a stdouot
                //the original stdout

                execl("/usr/bin/wc", "wc", "-l", (char *)NULL);

              }
          }
          else  { // middle commands grep
              dup2(restoreFd,0);   // new fd is the stdin
              close (restoreFd);
              int fd[2] ;
              pid_t cpid ;
              if (pipe(fd) == -1) {
                  perror("pipe");
                  exit(EXIT_FAILURE);
              }

              dup2(fd[1], 1);
              close (fd[1]);
              // restoreFd = fd[0];


              cpid = fork();
              if (cpid == -1) {
                   perror("fork");
                   exit(EXIT_FAILURE);
              }

              if (cpid == 0) {
                execl("/usr/bin/grep", "grep", argv[1],(char *)NULL);
                perror ( "execl more ");
              }
         }
     }

   int status;
   wait(&status);
     dup2( temp1, 1);
     dup2( temp0, 0);
     close(temp1);
     close(temp0);

    exit( EXIT_SUCCESS);
}
