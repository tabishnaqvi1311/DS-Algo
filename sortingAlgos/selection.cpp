//particular rounds
//in each round we pick the smallest element 
//and place it at the right place

//use cases:
//size => small

//arr[] = 65 25 12 22 11

//Round 1:
// we take i = 0(65) and swap the smallest element (11) with i = 0
//11 25 12 22 65

//Round 2:
// we take i = 1(25) and swap it with the next smallest value (12)
//11 12 25 22 65

//Round 3:
//again, i = 2 (25) swaps with 22
//11 12 22 25 65

//Also Round 4 to check

//There are always (n-1) rounds
#include <iostream>
using namespace std;

int printIt(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

int selectionSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int fixedEle = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[fixedEle]){
                fixedEle = j;
            }
        }
        swap(arr[fixedEle], arr[i]);
    }
    printIt(arr, size);
    return 0;
}

int main(){
    int arr[5] = {65, 22, 42, 56, 77};
    selectionSort(arr, 5);
    return 0;
}