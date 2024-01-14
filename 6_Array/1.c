#include<stdio.h>
void sort(int *arr,int size){
    int tem;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size-1;j++){
            if(arr[i]>arr[j]){
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    return ;
}
int main(){
    int arr[]={5,3,2,1,6,8,6,9};
    int size= sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}