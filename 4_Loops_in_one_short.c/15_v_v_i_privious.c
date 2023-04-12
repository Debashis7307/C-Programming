#include<stdio.h>
int main(){
int n;
printf("Enter the number :");
scanf("%d ",&n);
int a=0;
for(int i=2;i<=(n-1);i++){
    if(n%i==0){
        a=1;
        break;
    }
}
if(n==1){
    printf("The given number is nither prime nor composit");
}
else if(a==1){
    printf("The given number is composit");
}
else{
    printf("The given number is prime");
}
    return 0;
}