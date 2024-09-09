#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main(){
  pid_t q;
  printf("Before executing fork!\n");
  q=fork();
  if (q<0){
    printf("Error in fork!\n");
  }
  // It is a orphan process here the parent execute first before the child
  else if(q==0){
    // sleep(5);
    printf("Child process id is - %d\n",getpid());
    printf("Parent process id is - %d\n",getppid());
  }
  // It is zombic process , to avoide this we use wait()
  else{
    // wait(NULL);
    // sleep(5);
    printf("Parent process! id is - %d\n",getpid());
    printf("Child process! id is - %d\n",q);
  }
  printf("Common for both!\n");
}