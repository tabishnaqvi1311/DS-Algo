#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    ((n&1)==0)?(cout<<"EVEN"):(cout<<"ODD");
    return 0;
}