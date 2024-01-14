#include<stdio.h>

int fibo(int x){
    if(x==1 || x==2 ) return 1;
    // int ans1=fibo(x-1);
    // int ans2=fibo(x-2);
    // int ans=ans1+ans2;
    // return ans;
    return fibo(x-1)+fibo(x-2);
}

int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    fibo(a);
    printf("the %dth fibonacci number is %d ",a,fibo(a));
    return 0;
}