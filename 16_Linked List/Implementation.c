#include<stdio.h>
#include<stdlib.h>

int main(){
  struct node{
    int data;
    struct node *next;
  };
  struct node *head,*newnode,*temp;
  head=0;int choice,count=0;
  while(choice){
    newnode=(struct node*) malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    if(head==0){
      head=temp=newnode;
    }
    else{
      temp->next =newnode;
      temp=newnode;
    }
    printf("Enter 1 to continue otherwise enter 0 ");
    scanf("%d",&choice);
  }
  temp = head;
  while(temp!=0){
    printf("%d \n",temp->data);
    count++;
    temp=temp->next;
  }
  printf("The totle no of node in this linked list is :- %d",count);
  return 0;
}