#include <iostream>
#include <math.h>
using namespace std;

int sumOfdigits(int x, int sum = 0){
    if(x!=0){
        int digit = x%10;
        sum+=digit;
        return sumOfdigits(x/10, sum);
    }
    return sum;
}

int main(){
    
    int n;
    cin >> n;

    cout << sumOfdigits(n);

    return 0;
}