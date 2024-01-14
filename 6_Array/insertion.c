#include<stdio.h>

void display(int arr[],int size){
for(int i=0;i<size;i++){
        printf("%d \n",arr[i]);
}
}

int main(){
    int arr[50],size,num,pos;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    display(arr,size);
    return 0;
}