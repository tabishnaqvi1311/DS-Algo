#include <iostream>
#include <math.h>
using namespace std;
int main(){
    
    int dec, ans = 0, i = 0;
    cin >> dec;
    while (dec!=0){
        int digit = dec & 1; //getting last digit
        ans = ans + digit*pow(10, i);
        dec = dec >> 1;
        i++;
    }
    cout << ans;
    

    return 0;
}