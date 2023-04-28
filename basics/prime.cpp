#include <iostream>
using namespace std;
int main(){
    int n;
    bool isPrime = true;
    cin >> n;

    if(n==0 || n==1){
        cout<<"NOT PRIME";
        return 0;
    }

    for (int i = 2; i < n; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }
    
    isPrime?(cout<<"PRIME"):(cout<<"NOT PRIME");

    return 0;
}