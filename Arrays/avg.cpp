#include <iostream>
using namespace std;
int main(){
    
    int arr[4] = {1, 2, 3, 4};
    int sum = 0;
    int s = 0, e = 1;
    while(e < 4){
        cout << s << " " << e << endl;
        sum = sum + arr[s++] + arr[e++];
        cout << sum << endl;
    }
    
    cout << "avg is " << sum/4;

    return 0;
}
