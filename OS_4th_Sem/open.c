#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// reading from a file 
int main(){
  int n,fd;
  char buff[50];
  fd = open("test.txt",O_RDONLY);
  n=read(fd,buff,20);
  write(1,buff,n);
}

// reading from a file and write into another file
int main(){
  int n,fd1,fd2;
  char buff[50];
  fd1=open("test.txt",O_RDONLY);
  fd2=open("target.txt",O_CREAT|O_WRONLY,0777);
  n=read(fd1,buff,25);
  write(fd2,buff,n);
}

//writing in a file taking user data input
int main(){
  int n,df;
  char buff[100];
  df=open("target.txt",O_WRONLY|O_APPEND);
  n=read(0,buff,90);
  write(df,buff,n);
}