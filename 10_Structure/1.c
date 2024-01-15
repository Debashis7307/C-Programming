#include<stdio.h>
struct student{ 
int roll;
char name[20];
float marks;
};
int main(){
   struct student s1;
   printf("Enter the info of student 1\n");
   scanf("%d",&s1.roll);
   scanf("%s",s1.name);
   scanf("%f",&s1.marks);
   printf("\nRoll: %d",s1.roll);
   printf("\nname: %s",s1.name);
   printf("\nMarks: %f",s1.marks);
   return 0;
}