#include <iostream>
using namespace std;

void print(int c){
    if(c==0) return;
    cout << c;
    print(c-1);
    cout << c;
}

int main(){
    int n;
    cin >> n;

    print(n);

    return 0;
}