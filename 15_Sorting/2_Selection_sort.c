
#include<stdbool.h>
#include<limits.h>
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

    // Selection sort

    for(int i=0;i<a-1;i++){
        int min = INT_MAX;
        int min_index = -1;
        for(int j=i;j<=a-1;j++){
            if(min>arr[j]){
                min = arr[j];
                min_index = j;
            }
        }
            int tem = arr[min_index];
                arr[min_index]= arr[i];
                arr[i]= tem;
    }

    //print the output

     printf("\nNow the sorted list is: \n");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}