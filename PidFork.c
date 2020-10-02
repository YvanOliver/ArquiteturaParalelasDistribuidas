#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

 int main (void) {
   pid_t pid, pid2;
   int status;
 pid = fork();
 if (pid == 0) { 
     pid2 = fork();
  	 int status2;
 if (pid2 == 0) {
	 printf("Filho!\n");
  } else {
	 printf("Meu ");
	 fflush(stdout);
	 wait(&status2);
	 }
 } else {
	 printf("Eae ");
	 fflush(stdout);
	 wait(&status);
	 } return 0;
 } 
