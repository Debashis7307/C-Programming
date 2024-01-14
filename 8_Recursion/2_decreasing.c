#include<stdio.h>

void function(int a){
    if(a==0) return;
    printf("%d \n",a);
    function(a-1);
    return;
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    function(n);
    return 0;
}