#include<unistd.h>
#include<stdio.h>

int main(){
  int n;
  //write system call (file descriptor , data , length)
  n=write(1,"Hey there",9);
  printf("\nThe write sys call returns : length- %d\n",n); 
}