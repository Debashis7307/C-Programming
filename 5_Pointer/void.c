#include<stdio.h>
int main(){
    void *ptr;
    int a=5;
    float b=5.55;
    char c='D';
    ptr=&a;
    printf("a = %d\n",*(int*)ptr);
    ptr=&b;
    printf("b = %f\n",*(float*)ptr);
    ptr=&c;
    printf("c = %c\n",*(char*)ptr);
    return 0;
}