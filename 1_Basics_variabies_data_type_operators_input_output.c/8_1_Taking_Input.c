#include<stdio.h>
int main(){
    float radius,pi,volume;
    printf("Enter the radious :");
    scanf("%f",&radius);
    pi = 3.14159;
    volume = (4*pi*radius*radius*radius)/3;
    printf("The volume of the sphere :%f",volume);
    return 0;
}