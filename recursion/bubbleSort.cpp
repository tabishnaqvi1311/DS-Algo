#include <iostream>
using namespace std;

void bubbleSort(int *arr,int size){
    if(size == 0 || size == 1){
        return;
    }
    for(int i = 0; i < size; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    bubbleSort(arr, size - 1);
}

int main(){
    int arr[6] = {2, 3, 4, 2, 1, 0};
    bubbleSort(arr, 6);

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}