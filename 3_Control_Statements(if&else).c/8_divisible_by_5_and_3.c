#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("The number is divisible by both 5 & 3");
    }
   else if(n%5==0 && n%3!=0){
        printf("The number is only divisible by 5 ");
    }
    else if(n%5!=0 && n%3==0){
        printf("The number is only divisible by 3");
    }
    else{
        printf("The is nither divisible by 5 nor 3");
    }
    return 0;
}