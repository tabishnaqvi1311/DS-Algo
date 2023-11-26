//in circular LL, we dont need a head
//jus a tail node will do

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
 
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int x = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        } 
        cout << "mem freed for node with data " << x << endl;
    }
};

void insertNode(Node* &tail, int data, int element){
    //assuming element exists in list
    //list is empty
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    //non empty list
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        //element is found
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
    
}

void deleteNode(Node* &tail, int data){
    if(tail == NULL){
        cout << "underflow";
        return;
    }
    Node* prev = tail;
    Node* curr = prev->next;

    while(curr->data != data){
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

void printLL(Node* &tail){
    if(tail == NULL){
        cout << "list is empty!";
        return;
    }
    Node* temp = tail;

    do{
        cout << "[ " << tail->data << " , " << "&" << " ]->"; 
        tail = tail->next;
    }
    while(tail != temp);
    cout << endl;
}

int main(){
    
    string prompt = "y";
    

    Node* tail = NULL; 
    do{
        cout << "1. Insert Node" <<  endl;
        cout << "2. Delete Node" <<  endl;
        cout << "3. View List" <<  endl;
        int num;
        cin >> num;
        switch (num){
        case 1:
            cout << "what to insert?" << endl;
            cout << "near what element to insert?" << endl;
            int WhatToInsert, NearWhatToInsert;
            cin >> WhatToInsert >> NearWhatToInsert;
            insertNode(tail, WhatToInsert, NearWhatToInsert);
            break;
        case 2:
            cout << "what value to delete";
            int WhatValueToDelete;
            cin >> WhatValueToDelete;
            deleteNode(tail, WhatValueToDelete);
            break;
        case 3:
            printLL(tail);
            break;
        default:
            cout << "Invalid Choice!";
            break;
        }

        cout << "continue? (y/n)";
        cin >> prompt;

    } while (prompt != "n" || prompt != "N");
    

    return 0;
}