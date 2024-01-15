#include<stdio.h>
struct student{
int roll;
char name[20];
float marks;
};
int main(){
    int x;
    printf("Enter the student number:");
    scanf("%d",&x);
    struct student s[x];
    printf("Enter the student ditals:\n");
    for(int i=0;i<x;i++){
        scanf("Roll: %d\nName: %s\nMarks: %f",&s[i].roll,s[i].name,&s[i].marks);
    }
    printf("Here is the  ditals:\n");
    for(int i=0;i<x;i++){
        printf("Roll: %d\nName: %s\nMarks: %f",s[i].roll,s[i].name,s[i].marks);
    }
    return 0;
}