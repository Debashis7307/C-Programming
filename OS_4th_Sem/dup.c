#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<fcntl.h>

int main(){
  int df,fd1;
  df = open("test.txt",O_RDONLY);
  printf("\nOld pid is -%d",df);
  fd1 = dup2(df,10);
  printf("\nNew pid is -%d",fd1);
}