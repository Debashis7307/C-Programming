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
   if(a<b && a<c){
    printf("First person is the youngest");
   }
   if(b<a && b<c){
    printf("Second person is the youngest");
   }
   if(c<a && c<b){
    printf("Third person is the youngest");
   }
    return 0;
}