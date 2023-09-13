#include <iostream>
using namespace std;

int sumOfElements(int *arr, int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    return sumOfElements(arr, size - 1) + arr[size - 1];
    //return the sum of last element and remaining elements
}

int main(){
    
    int arr[5] = {4,5,2,1,7};

    cout << sumOfElements(arr, 5);

    return 0;
}