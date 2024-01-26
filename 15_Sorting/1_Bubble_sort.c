#include<stdio.h>

int main(){
    int a;
    printf("Enter the size of the list : ");
    scanf("%d",&a);
    int arr[a];
    printf("\nEnter the elements of the list : ");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a-1-i;j++){
            if(arr[j]>arr[j+1]){
                int tem = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= tem;
            }
        }
    }
    printf("\nNow the sorted list is: \n");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}