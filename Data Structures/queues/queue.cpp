#include <iostream>
using namespace std;
class Queue{
private:
    static const int maxSize = 100;
    int front;
    int rear;
    int queue[maxSize];
public:
    Queue(){
        front = -1;
        rear = -1;
    }
    bool isEmpty(){
        return (front == -1 && rear == -1);
    }
    bool isFull(){
        return (rear+1)%maxSize == front;
    }
    void enqueue(int x){
        if(isFull()){
            cout << "full!";
            return;
        }
        if(isEmpty()) front = rear = 0;
        else rear = (rear+1)%maxSize;
        queue[rear] = x;

    }
    void dequeue(){
        if(isEmpty()){
            cout << "is empty";
            return;
        }
        if(front == rear){
            front = rear = -1;
        }
        else front = (front + 1)%maxSize;
    }
};
int main(){
    Queue q1;
    q1.enqueue(5);
    cout << q1.isEmpty();
    q1.dequeue();
    cout << q1.isEmpty();
}