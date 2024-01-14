#include<stdio.h>
// process:1  using extra parameter....
// void function(int a,int x){

//     if(a>x) return;
//     printf("%d \n",a);
//     function(a+1,x);
//     return;
// }

// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     int* p=&n;
//     function(1,n);
//     return 0;
// }

// process:2  changing the position of base case....

void fun(int a){
    if(a==0) return;
  fun(a-1);
  printf("%d\n",a);
  return;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}