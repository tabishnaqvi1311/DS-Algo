#include <iostream>
using namespace std;
int main(){
    
    int n = 20;
    int *pt = &n;
    int **(pt) = &pt;




    return 0;
}