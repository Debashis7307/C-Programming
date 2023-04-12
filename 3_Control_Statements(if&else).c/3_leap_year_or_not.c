#include<stdio.h>
int main(){
    int n;
    printf("Enter a year");
    scanf("%d",&n);
if(n%4==0){
    printf("Yes,The year is leap year");
}
else{
    printf("No,The year is not a leap year");
}
    return 0;
}