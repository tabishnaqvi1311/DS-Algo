#include <iostream>
#include <math.h>
using namespace std;
int main(){
    
    int bin, ans = 0, i = 0;
    cin >> bin;
    while(bin!=0){
        int bit = bin & 1;
        ans = ans + bit*pow(2, i);
        bin/=10;
        i++;
    }
    cout << ans;

    return 0;
}