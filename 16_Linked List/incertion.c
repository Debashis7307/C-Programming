#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtBeginning(int data) {
   struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int data) {
   struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
       struct Node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
    }
}

void insertAtPosition(int data, int position) {
   struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
    }
    else {
       struct Node* current = head;
        for (int i = 1; i < position - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to print the linked list
void printList() {
   struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Inserting elements
insertAtBeginning(10);
    insertAtEnd(20);
    insertAtPosition(5, 1);
    insertAtPosition(30, 3);

    // Printing the list
printList();

    // Don't forget to free the allocated memory to avoid memory leaks
while (head != NULL) {
       struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
