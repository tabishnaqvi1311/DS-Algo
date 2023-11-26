#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printLinkedList(Node* &head){
    Node* temp = head;
    cout << "\n";
    while(temp!=NULL){
        cout << "[ " << temp->data << " , " << "&" << " ]->"; 
        temp = temp -> next;
    }
    cout << "null";
    cout << endl;
}

void InsertAtHead(Node* &head, int data){
    //create new node with data = data
    Node* temp = new Node(data);
    //check for empty list
    if(head == NULL){
        temp->next = NULL;
        head = temp;
        return;
    }
    //point the next of newly created node to the head of the linked list
    temp->next = head;
    head = temp;
    return;
}
void InsertAtMiddle(Node* &head, int pos, int data){
    Node *temp = head;
    int cnt = 1;

    while(cnt < pos - 1){
        temp = temp->next;
        cnt++;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}
void InsertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);

    tail->next = temp;
    temp->next = NULL;
    tail = temp;

}
void recursivePrint(Node* &head){
    Node* temp = head;
    if(temp == NULL) return;
    cout << "[ " << temp->data << " , " << "&" << " ]->"; 
    temp = temp->next;
    recursivePrint(temp);
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head, 12);
    InsertAtTail(tail, 8);
    InsertAtMiddle(head, 2, 77);
    // printLinkedList(head);
    recursivePrint(head);

    return 0;
}