#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius :");
    scanf("%f",&radius);
    float pi = 3.14159;
    float area = pi * radius * radius;
    printf("The area of the circle is : %f",area);
    return 0;
}