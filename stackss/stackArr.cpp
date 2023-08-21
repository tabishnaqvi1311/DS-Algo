//implementation of stack using arrays and classes

#include <iostream>
using namespace std;

class Stack {
private:
    int top;
public:
    int st[100];

    Stack(){
        top = -1;
    }
    
    bool push(int x){
        if(top >= 99){
            cout << "STACK OVERFLOW";
            return false;
        }
        st[++top] = x;
        cout << "Pushed\n";
        return true;
    }

    int pop(){
        if(top < 0){
            cout << "STACK UNDERFLOW";
            return false;
        }
        int x = st[top--];
        return x;
    }

    bool isEmpty(){
        return top < 0;
    }

    int peek(){
        if(isEmpty()){
            cout << "Stack is empty";
            return -1;
        } 
        return st[top];
    }

};

int main(){

    Stack s;

    s.push(1);
    s.push(32);
    s.push(54);

    s.pop();




    return 0;
}