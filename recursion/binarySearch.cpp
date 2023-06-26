#include <iostream>
using namespace std;

int binaryRec(int *arr, int s, int e, int target){
    if(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target) return mid;

        if(arr[mid] < target) return binaryRec(arr, mid+1, e, target);

        return binaryRec(arr, s, mid-1, target);
    }
    return -1;
}

int main(){
    
    int arr[5] = {1, 2, 3, 4, 5};

    int target;
    cin >> target;

    cout << binaryRec(arr, 0, 4, target);

    return 0;
}