#include<stdio.h>

void function(int a){
    if(a==0) return;
    printf("%d \n",a);
    function(a-1);
     printf("%d \n",a);
    return;
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    function(n);
    return 0;
}