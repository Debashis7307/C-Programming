#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
int r = a/b;
int remainder = a-(b*r);
printf("The remainder is :%d",remainder);
return 0;
}