#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the size of the list : ");
    scanf("%d",&a);
    int arr[a];
    printf("\nEnter the elements of the list : ");
    for(int i=0;i<a;i++){
        scanf("%d",arr);
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i;j++){
            if(arr[j]>arr[j+1]){
                b = arr[j+1];
                arr[j+1]= arr[j];
                arr[j]=b;
            }
        }
    }
    printf("\nNow the sorted list is: \n");
    for(int i=0;i<a;i++){
        printf("%d",arr);
    }
    return 0;
}