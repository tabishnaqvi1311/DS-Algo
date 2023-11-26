#include <iostream>
using namespace std;

void print(int *arr, int size){
    cout << *arr << " ";
    if(size < 1) return;
    return print(arr+1, size-1);
}
int partit(int *arr, int s, int e){
    int pivot = arr[s];
    //count all elements <= pivot
    int count = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot) count++;
    }
    //right
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    //left
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int *arr, int s, int e){
    //base case
    if(s >= e) return;
    //partition
    int p = partit(arr, s, e);
    //sort left part
    quickSort(arr, s, p-1);
    //sort right part
    quickSort(arr, p+1, e);
}
int main(){
    int arr[8] = {5, 7, 3, 2, 9, 1, 4, 0};

    quickSort(arr, 0, 7);
    print(arr, 7);
    return 0;
}