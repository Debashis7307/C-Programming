#include<stdio.h>
int main(){
    int n;
    printf("Enter any integer");
    scanf("%d",&n);
    if(n<0){ //means if n is negative.
      n=n*(-1);
    }
    printf("The absolute value of the integer is :%d",n);
    return 0;
}