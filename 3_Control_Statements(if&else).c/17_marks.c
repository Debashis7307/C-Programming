#include<stdio.h>
int main(){
    int n;
    printf("Enter your persentage :");
    scanf("%d",&n);
    if(n>=90){
        printf("Excellent");
    }
    else if(n>=80){
        printf("Very Good");
    }
    else if(n>=70){
        printf("Good");
    }
    else if(n>=60){
        printf("Average");
    }
    else if(n>=40){
        printf("Bellow Average");
    }
    else {
        printf("Fail");
    }
    return 0;
}