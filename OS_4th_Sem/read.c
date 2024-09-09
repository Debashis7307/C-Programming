#include <unistd.h>

int main() {
  //read from the user , store it in buffer , then write it on the screen.
  // 0 -> stdin
  // 1 -> stdout
  // 2 -> stderr
  int n; 
	char buf[50];
  n = read(0,buf,25);
  write(1,buf,n);
}