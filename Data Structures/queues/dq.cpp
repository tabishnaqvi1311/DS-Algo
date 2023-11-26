#include <iostream>
using namespace std;
class Deque{
    int queue[100];
    int front;
    int rear;
public:
    Deque(){
        front = -1;
        rear = 0;
    }
    bool isFull(){return ((front == 0 && rear == 99) || front == rear + 1);}
    bool isEmpty(){return front == -1;}
    void insertAtFront(int val){
        if(isFull()){
            cout << "Overflow";
            return;
        }
        if(front == -1) front = rear = 0;
        else if(front == 0) front = 99;
        else front-=1;
        queue[front] = val;
    }
    void insertAtRear(int val){
        if(isFull()){
            cout << "Overflow";
            return;
        }
        if(front == -1) front = rear = 0;
        else if(rear == 99) rear = 0;
        else rear++;
        queue[rear] = val;
    }
    void deleteAtFront(){
        if(isEmpty()){
            cout << "Underflow";
            return;
        }
        if(front == rear) front = rear = -1;
        else if(front == 99) front = 0;
        else front++;
    }
    void deleteAtBack(){
        if(isEmpty()){
            cout << "Underflow";
            return;
        }
        if(front == rear) front = rear = -1;
        else if(rear == 0) rear = 99;
        else rear--;
    }
    int getFront(){return queue[front];}
    int getRear(){return queue[rear];}
};
int main(){
    Deque d;
    d.insertAtFront(5);
    d.insertAtRear(6);
    cout << d.getFront() << endl;
    cout << d.getRear() << endl;
    d.deleteAtBack();
    d.deleteAtFront();
    cout << d.isEmpty();
    return 0;
}