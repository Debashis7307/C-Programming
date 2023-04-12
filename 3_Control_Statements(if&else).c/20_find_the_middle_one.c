#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the three numbers :");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x>y && y>z || z>y && y>x){
        printf("The middle number is :%d",y);
    }
    else if(y>z && z>x || x>z && z>y){
        printf("The middle number is :%d",z);
    }
    else{
        printf("The middle number is :%d",x);
    }
    return 0;
}