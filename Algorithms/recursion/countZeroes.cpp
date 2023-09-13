#include <iostream>
using namespace std;

int countZeroes(int x, int count = 0){
    if(x==0) return count;
    if(x%10==0) count++;
    return countZeroes(x/10, count);
}

int main(){
    int n;
    cin >> n;
    cout << countZeroes(n);
    return 0;
}