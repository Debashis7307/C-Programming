#include<stdio.h>

int power(int x,int y){
    if(y==0) return 1;
    else return x*power(x,y-1);
}

int main(){
    int a;
    printf("Enter the base:");
    scanf("%d",&a);
    int b;
    printf("Enter the power:");
    scanf("%d",&b);
    int ans=power(a,b);
    printf("%d raised to power %d is = %d",a,b,ans);
    return 0;
}