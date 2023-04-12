#include<stdio.h>
int main(){
    int a;
    printf("Enter the age of first person :");
    scanf("%d",&a);
    int b;
    printf("Enter the age of second person :");
    scanf("%d",&b);
    int c;
    printf("Enter the age of third person :");
    scanf("%d",&c);
  if(a<b){
    if(a<c){
        printf("The first person is youngest");
    }
    else{
        printf("The third person is youngest");
    }
  }
  else{
    printf("The second person is youngest");
  }
    return 0;
}