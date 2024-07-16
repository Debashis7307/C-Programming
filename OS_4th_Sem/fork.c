#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char* argv[]){
  int id=fork();
  printf("Hey there!\n");
  if (id==0){
    printf("It is from child process!\n");
  }else{
    printf("It is from main process & the pid is %d\n",id);
  }
  return 0;
}

// int main(int argc, char* argv[]){
//   int id=fork();
//   if (id!=0){
//     fork();
//   }
//   printf("Hey there!\n");
//   return 0;
// }

// int main(int argc, char* argv[]){
//   fork();
//   fork();
//   printf("Hey there!\n");
//   return 0;
// }