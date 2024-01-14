#include<stdio.h>

// void fun(int x,int y){
//     if(x==0){
//         printf("The ans is: ");
//          printf("%d  ",y);
//          return;
//     }
//     fun(x-1,y+x);
//     return;
// }

// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     fun(n,0);
//     return 0;
// }

int sum(int a){
    if(a==1) return 1;
    else return a+sum(a-1);
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int ans=sum(n);
    printf("The sum is: %d",ans);
    return 0;
}