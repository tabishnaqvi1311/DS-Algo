#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

void push(int val){
    struct Node *newNode = malloc(sizeof(newNode));

    newNode->data = val;



}
void peek(){

}

int main(){
    //create head node
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->next = NULL;


    return 0;
}