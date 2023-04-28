//pick two eles and swap if needed
//(n-1) rounds
#include <iostream>
using namespace std;

int printIt(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int bubble(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        printIt(arr, size);
        return 0;
    }
}

int main(){
    int myArr[5] = {22, 67, 48, 32, 9};
    bubble(myArr, 5);
    return 0;
} 