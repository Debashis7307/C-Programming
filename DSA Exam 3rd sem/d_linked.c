#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head = NULL;
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("\nMemory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void beginsert(int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    printf("\nNode inserted at the beginning.\n");
}
void lastinsert(int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("\nNode inserted at the end.\n");
}
void randominsert(int data, int loc)
{
    struct Node *newNode = createNode(data);
    if (loc < 1)
    {
        printf("\nInvalid location for insertion.\n");
        return;
    }
    if (loc == 1)
    {
        newNode->next = head;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        printf("\nNode inserted at a random location.\n");
        return;
    }
    struct Node *temp = head;
    int count = 1;
    while (count < loc - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
    {
        printf("\nInvalid location for insertion.\n");
        return;
    }
    newNode->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
    printf("\nNode inserted at a random location.\n");
}
void begin_delete()
{
    if (head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        struct Node *temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(temp);
        printf("\nNode deleted from the beginning.\n");
    }
}
void last_delete()
{
    if (head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        if (temp->prev != NULL)
        {
            temp->prev->next = NULL;
        }
        else
        {
            head = NULL;
        }
        free(temp);
        printf("\nNode deleted from the end.\n");
    }
}
void random_delete(int loc)
{
    if (head == NULL || loc < 1)
    {
        printf("\nList is empty or invalid location for deletion.\n");
        return;
    }
    struct Node *temp = head;
    int count = 1;
    while (count < loc && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL || temp->next == NULL)
    {
        printf("\nInvalid location for deletion.\n");
        return;
    }
    struct Node *delNode = temp->next;
    temp->next = delNode->next;
    if (delNode->next != NULL)
    {
        delNode->next->prev = temp;
    }
    free(delNode);
    printf("\nNode deleted after the specified location.\n");
}
void display()
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("\nList is empty.\n");
        return;
    }
    printf("\nPrinting values...\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("Choose from the menu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at any random location\n");
        printf("4. Delete from the beginning\n");
        printf("5. Delete from the end\n");
        printf("6. Delete node after specified location\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to insert: ");
            int val;
            scanf("%d", &val);
            beginsert(val);
            break;
        case 2:
            printf("Enter value to insert: ");
            scanf("%d", &val);
            lastinsert(val);
            break;
        case 3:
            printf("Enter value to insert: ");
            scanf("%d", &val);
            printf("Enter location: ");
            int loc;
            scanf("%d", &loc);
            randominsert(val, loc);
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            printf("Enter location: ");
            scanf("%d", &loc);
            random_delete(loc);
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Please enter a valid choice.\n");
        }
    }
    return 0;
}