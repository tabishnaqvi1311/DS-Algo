#include <iostream>
using namespace std;
int fibbRec(int x){
    if(x < 2) return x;
    return fibbRec(x-1) + fibbRec(x-2);
}
void fibbIter(int n){
    int first = 0, second = 1;
    cout << "iter" << endl;
    cout << first << " " << second << " ";

    for(int i = 2; i < n; i++){
        int next = first + second;
        first = second;
        second = next;
        cout << next << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    fibbIter(n);
    cout << "Recursive" << endl;
    for(int i = 0; i < n; i++){
        cout << fibbRec(i) << " ";
    }
    return 0;
}

//write a program to find an element in linear array using binarySearch (iterative)
//then recursive approach

//then stack

