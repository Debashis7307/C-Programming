#include<stdio.h>
int main(){
    float principal, rate, time, si;
    printf("Enter the Principal :");
    scanf("%f",&principal);
    printf("Enter the Rate :");
    scanf("%f",&rate);
    printf("Enter the Time :");
    scanf("%f",&time);
    si =  (principal*rate*time)/100;
    printf("Here is your simple interest :%f",si);
    return 0;
}