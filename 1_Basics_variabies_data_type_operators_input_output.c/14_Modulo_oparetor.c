#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    int remainder = b&a;
    printf("The remainder is :%d",remainder);
    return 0;
}