#include <iostream>
using namespace std;

int linearSearch(int *arr, int size, int target){
    if(size == 0){
        return 0;
    }
    if(target == arr[0]){
        return 1;
    }
    return linearSearch(arr + 1, size - 1, target);
}

int main(){
    
    int arr[10] = {3, 43, 4, 5, 7, 68, 78, 7, 8 ,9};

    int target;
    cin >> target;

    cout << linearSearch(arr, 10, target);

    return 0;
}