#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void setNode(struct Node* temp, int data, struct Node* next){
    temp->data = data;
    temp->next = next;
}
void printLinkedList(struct Node* temp){
    while(temp != NULL){
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return;
}

//inserting nodes
void insertAtHead(struct Node **head, int data){
    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if(head == NULL){
        newNode->next = NULL;
        *head = newNode;
        return;
    }

    newNode->next = *head;
    *head = newNode;
}
void insertAtTail(struct Node **tail, int data){
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;

    if(tail == NULL){
        newNode->next = NULL;
        *tail = newNode;
        return;
    }

    (*tail)->next = &newNode;
    newNode->next = NULL;
    *tail = newNode;
}
int main(){
    
    struct Node *head, *middle, *tail;
    head = malloc(sizeof(struct Node));
    tail = malloc(sizeof(struct Node));

    struct Node *headref = head; //reference to head
    struct Node *tailref = tail; //reference to tail
    insertAtHead(&headref, 80);
    insertAtTail(&tailref, 69);

    printLinkedList(headref);

    return 0;
}