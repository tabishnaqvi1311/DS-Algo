#include <iostream>
using namespace std;
int main(){
    
    int n = 10;

    int *p = &n;
    cout << *p << endl;
    cout << p << " " << &n << endl;
    cout << ++(*p) << endl;
    cout << n << endl;

    //copying a pointer
    int *q = p;
    cout << q << " " << p << endl;
    cout << *q << " " << *p << endl;
    cout << ++(*q) << " " << *p << " " << n << endl;

    //pointer arithmetic
    p+=1;
    cout << p << " " << n << endl;
    cout << *p;


    return 0;
}