#include<stdio.h>
int main(){
    int a;
    printf("Enter the first number :");
    scanf("%d",&a);
    int b;
    printf("Enter the second number :");
    scanf("%d",&b);
    int c;
    printf("Enter the third number :");
    scanf("%d",&c);
    int d;
    printf("Enter the fourth number :");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("The greatest number is :%d",a);
    }
    if(b>a && b>c && b>d){
        printf("The greatest number is :%d",b);
    }
    if(c>a && c>b && c>d){
        printf("The greatest number is :%d",c);
    }
    if(d>a && d>b && d>c){
        printf("The greatest number is :%d",d);
    }
    return 0;
}