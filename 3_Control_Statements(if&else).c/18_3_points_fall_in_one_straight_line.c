#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("Enter the first point :");
    scanf("%f%f",&x1,&y1);
    printf("Enter the second point :");
    scanf("%f%f",&x2,&y2);
    printf("Enter the third point :");
    scanf("%f%f",&x3,&y3);
    double m1;
    m1=(y2-y1)/(x2-x1);
    double m2;
    m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("The above three points lie in one straight line");
    }
    else{
        printf("Not");
    }
    return 0;
}