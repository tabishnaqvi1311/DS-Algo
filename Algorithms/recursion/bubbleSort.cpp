#include <iostream>
using namespace std;

void bubbleSort(int *arr,int row, int col = 0){
    if(row==0) return;
    if(row > col){
        if(arr[col] > arr[col+1]){
            int temp = arr[col];
            arr[col] = arr[col+1];
            arr[col+1] = temp;
        }
        bubbleSort(arr, row, col+1);
    }
    else{
        bubbleSort(arr, row-1);
    }
}

int main(){
    int arr[6] = {2, 3, 4, 2, 1, 0};
    bubbleSort(arr, 6);

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}