#include <iostream>
using namespace std;

int rever(int x, int ans = 0){
    if(x==0) return ans;
    ans = ans*10 + x%10;
    return rever(x/10, ans);
}

bool isPalindrome(int x){
    return x==rever(x);
}

int main(){
    int n;
    cin >> n;
    cout << isPalindrome(n);
    return 0;
}