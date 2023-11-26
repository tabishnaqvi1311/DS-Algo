#include <iostream>
using namespace std;

int fact(int x){
    if(x == 1) return x;
    return fact(x-1)*x;
}
int factIter(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int x = 7;
    cout << fact(x);
    cout << factIter(x);
    return 0;
}