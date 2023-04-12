#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordition of point :");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0){
        printf("The point is on the origin");
    }
    else if(x==0){
        printf("The point is on y-axis");
    }
    else if(y==0){
        printf("The point is on x-axis");
    }
    else{
        printf("The point is neither x-axis or nor y-axis or not in origin");
    }
    return 0;
}