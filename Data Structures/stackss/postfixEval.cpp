#include <iostream>
using namespace std;

class Stack {
    int top;
    int MAX;
    int* a;

public:
    Stack(int size){
        top = -1;
        MAX = size;
        a = new int [MAX];
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};
bool Stack::isEmpty(){
    return (top < 0); 
} 
bool Stack::isFull(){
    return (top == MAX - 1); 
    
} 
int Stack::peek(){ 
    return a[top]; 
    
} 
bool Stack::push(int x) {
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        top++;
        a[top] = x;
        return true;
    }
}
int Stack::pop(){
    if (top < 0) {
        cout << "Stack Underflow"; 
        return INT_MIN; 
    } 
    else { 
        int x = a[top]; 
        top--; return x; 
    }
}
void evalRPN(string pfix){
    Stack stack(100);

    for(int i = 0; i < pfix.length(); i++){
        if (isdigit(pfix[i])) stack.push(pfix[i] - '0');

        else{
            int op1 = stack.peek();
            stack.pop();
            int op2 = stack.peek();
            stack.pop();
            if(pfix[i] == '+') op1 = op2 + op1;
			if(pfix[i] == '-') op1 = op2 - op1;
			if(pfix[i] == '/') op1 = op2 / op1;
			if(pfix[i] == '*') op1 = op2 * op1;   
            stack.push(op1);
        }
    }
    cout << stack.peek();
}

int main(){
    
    string postfix = "231*+9-";

    evalRPN(postfix);

    return 0;
}