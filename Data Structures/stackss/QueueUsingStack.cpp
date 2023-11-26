#include <iostream>
#include <stack>
using namespace std;

class QuS {
public:
    stack<int> s;
    stack<int> t;
    
    void enqueue(int x) {
        s.push(x);
    }
    
    int dequeue() {
        while(s.size() > 0){
            int temp = s.top();
            s.pop();
            t.push(temp);
        }
        int x = t.top();
        t.pop();
        while(t.size() != 0){
            int temp = t.top();
            t.pop();
            s.push(temp);
        }
        return x;

    }
    
    int front() {
        return s.top();
    }
    
    bool empty() {
        return s.size() == 0;
    }
};

int main(){
    


    return 0;
}