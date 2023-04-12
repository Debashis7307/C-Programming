#include<stdio.h>
int main(){
    int a;//a=length,b=breadth
    printf("Enter the length :");
    scanf("%d",&a);
    int b;//a=length,b=breadth
    printf("Enter the breadth :");
    scanf("%d",&b);
    int A=a*b;
    int P=2*(a+b);
    if(A>P){
        printf("Area is greater");
    }
    else if(P>A){
        printf("Perimeter is greater");
    }
    else{
        printf("Both are equal");
    }
    return 0;
}