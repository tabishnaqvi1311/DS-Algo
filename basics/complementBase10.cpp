#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==0){
        cout << 1;
        return 1;
    }
    int compliment = ~n;
    int mask = 0;

    while(n!=0){
        mask = mask << 1 | 1;
        n = n >> 1;
    }
    cout << (compliment&mask);

    return 0;
}