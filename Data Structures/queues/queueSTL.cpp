#include <iostream>
#include <queue>
using namespace std;

class StackUsingQueues {
public:
    queue<int> myq;
    queue<int> tempq;

    void push(int x){
        if(myq.size() == 0){
            myq.push(x);
            return;
        }
        int temp = myq.front();
        myq.pop();
        tempq.push(temp);
        push(x);

        while(!tempq.empty()){
            myq.push(tempq.front());
            tempq.pop();
        }
    }

    int pop(){
        int x = myq.front();
        myq.pop();
        return x;
    }

    int top(){ return myq.front(); }

    int empty(){ return myq.size() == 0; }
};

int main(){
    StackUsingQueues s1;
    cout << s1.empty() << endl;
    s1.push(5);
    cout << s1.empty() << endl;
    cout << s1.top() << endl;
    s1.push(10);
    cout << s1.pop() << endl;
    cout << s1.top() << endl;
    return 0;
}