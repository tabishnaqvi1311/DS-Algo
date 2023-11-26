#include <iostream>
using namespace std;

class Queue {
    int front, rear;
    int queue[100];
public:
    Queue(){
        front = rear = -1;
    }
    void enqueue(int val){
        if((front == 0 && rear == 99) || ((rear + 1)%100 == front)){
            cout << "Full";
            return;
        }
        else if(front == -1){
            front = rear = 0;
            queue[rear] = val;
        }
        else if(rear == 99 && front != 0){
            rear = 0;
            queue[front] = val;
        }
        else queue[++rear] = val;
    }
    int dequeue(){
        if(front == -1){
            cout << "empty";
            return -1000000;
        }
        int x = queue[front];
        queue[front] = -1;

        if(front == rear) front = rear = -1;
        else if(front == 99) front = 0;
        else front++;
        return x;
    }
    int getFront(){
        return queue[front];
    }
    int getRear(){
        return queue[rear];
    }
};
int main(){
    Queue q;
    q.enqueue(9);
    cout << q.getFront() << endl;
    cout << q.getRear();
    q.dequeue();
    return 0;
}
