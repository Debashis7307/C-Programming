#include<stdio.h>
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    int a=3;
    for(int i=1;i<=x;i++){
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}