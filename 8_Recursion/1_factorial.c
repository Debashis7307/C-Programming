#include<stdio.h>

int factorial(int a){
    if(a==1 || a==0) return 1;
    else return a*factorial(a-1);
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int ans=factorial(n);
    printf("The factorial is: %d",ans);
    return 0;
}