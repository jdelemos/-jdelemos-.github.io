/*

Name: conathon Michael Delemos

University: Sierra College

Course: CS46

//Assignment: Execute Parent/Child Function

*/




#include  <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include  <sys/types.h>

void  main( void )
{
    pid_t  pid;
    int status;


    pid = fork();  // creates a new process
    if (pid == 0)  {

         //1  execl("/bin/ls", "ls", "-l", "-F", NULL ) ;
         //2  execl("/usr/bin/cal", "cal", "2019" , NULL );
         //3  execl("/bin/date", "date", NULL ) ;
         //4  execl("/bin/echo", "echo", "System", "Programming", NULL ) ;
         //5  execl("/bin/echo", "echo", "System Programming", NULL ) ;
         //6  execl("/bin/df", "df", "-h", "-i", NULL ) ;
         //7  execl("/bin/ps", "ps", "-l", "-f", NULL ) ;
         //8  execl("/bin/ps", "ps", "-l", "-e", NULL ) ;
         //9  execl("/bin/ps", "ps", NULL ) ;
         //10 execl("/bin/uname",  "uname", NULL ) ;
         //11 execl("/bin/uname", "uname", "-a", "-v", NULL ) ;
         //12 execl("/bin/uname", "uname", "-a", NULL ) ;

          13 execlp("./pwd",  "pwd",  NULL ) ;
     } else {

            int ret = wait ( &status);  // wait for the child program to complete
            if (  WIFSIGNALED(status) )
                printf ( " Yes, child got terminated by a signal \n ");
            else if ( WIFEXITED ( status) )
                printf ( " Yes child got terminated by normal process \n ");


     }


}
