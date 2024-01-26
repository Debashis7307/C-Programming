#include<stdio.h>

int main(){
    int a;
    printf("Enter the size of the list : ");
    scanf("%d",&a);

    //inecealizing an array

    int arr[a];

    //input a list of elements

    printf("\nEnter the elements of the list : ");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    // Bubble sort

    for(int i=0;i<a;i++){
        for(int j=0;j<a-1-i;j++){
            if(arr[j]>arr[j+1]){
                int tem = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= tem;
            }
        }
    }

    //print the output

    printf("\nNow the sorted list is: \n");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}