#include<stdio.h>
#include<stdbool.h>

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

    // Insertion sort

    for(int i =1;i<a;i++){
        int j = i;
        while(j>=1 && arr[j<arr[j-1]]){
            int tem = arr[j];  //swap(arr[j],arr[j-1]);
            arr[j]=arr[j-1];
            arr[j-1]=tem;
            j--;
        }
    }
    //print the output

    printf("\nNow the sorted list is: \n");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}