#include <stdio.h>
#include <string.h>

void display(char a[],char b[]){
int i = 0;
 while (a[i] != '\0' && b[i] != '\0') {
 if (a[i] != b[i]) {
 printf("The sentences are not equal.\n");
 return ;
 }
 i++;
 }
 printf("The sentences are equal.\n");
 return ;
}

int main() {
 char sentence1[100];
 char sentence2[100];
 printf("Enter the first sentence: ");
 fgets(sentence1, 100, stdin);
 printf("Enter the second sentence: ");
 fgets(sentence2, 100, stdin);
char* ptr1=sentence1;
char* ptr2=sentence2;
 display(ptr1,ptr2);
}
