#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d ",&n);
    int a=0;
    for(int i=2;i<=(n-1);i++){
        if(n%i==0) a=1;
        break; // after finding the 1st factorial , don't repit the loop
    }
    if(n==1) printf("The given number is nither prime nor composit .");
    else if(a==0) printf("The given number is prime ."); //only divisible by 1 & this number
    else printf("The given number is composit ."); //the number has minimum 3 factorials
    return 0;
}