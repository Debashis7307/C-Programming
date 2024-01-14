#include<stdio.h>
int main(){
    int arr[50], size;
    printf("Enter the size of the array you want to creat :");
    scanf("%d",&size);
    printf("Enter the elements of the array");
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array are");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}