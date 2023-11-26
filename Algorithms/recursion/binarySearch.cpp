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
    
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int target;
    cin >> target;

    int ans = binaryRec(arr, 0, 5, target);
    if(ans == -1){
        cout << "element not found";
    }
    else cout << "element found at" << ans;

    return 0;
}



