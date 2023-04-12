#include<stdio.h>
int main(){
    int a;
    printf("Enter the first side :");
    scanf("%d",&a);
    int b;
    printf("Enter the second side :");
    scanf("%d",&b);
    int c;
    printf("Enter the third side :");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("The triangle is valid");
    }
    else{
        printf("The triangle is not valid");
    }
    return 0;
}