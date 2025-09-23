#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

Node* createNode(int data) {
    Node* newnode = (Node*)malloc(sizeof(Node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void InsertAtFront(Node** head, int data) {
    Node* newnode = createNode(data);

    if (*head == NULL) {
        *head = newnode;
        return;
    }
    newnode->next = *head;
    (*head)->prev = newnode;
    *head = newnode;
}

void InsertAtEnd(Node** head, int data) {
    Node* newnode = createNode(data);
    if (*head == NULL) {
        *head = newnode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) { 
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void InsertAtPos(Node** head, int data, int pos) {
    if (pos == 1) {
        InsertAtFront(head, data);
        return;
    }
    Node* newnode = createNode(data); 
    Node* temp = *head;
    for (int i = 1; temp != NULL && i < pos - 1; i++) { 
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position\n");
        return; 
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = newnode;
    }
    temp->next = newnode;
}

void printList(Node* head) {
    Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;

    InsertAtEnd(&head, 10);
    InsertAtEnd(&head, 20);
    InsertAtFront(&head, 5); 
    InsertAtPos(&head, 15, 2); 

    printf("After Insertions:\n");
    printList(head);
    return 0;
}