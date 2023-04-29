#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int>arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    int s = 0;
    int e = arr.size() - 1;
    for(int i = 0; i<arr.size(); i++){
        if(s==e){
            break;
        }
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}