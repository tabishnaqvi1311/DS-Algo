#include <iostream>
using namespace std;

bool checkIfSorted(int *arr, int size){
    if(size <= 1) return 1;
    if(*arr >= *(arr+1)) return 0;
    return checkIfSorted(arr+1, size-1);
}

int main(){
    
    int arr1[12] = {5, 3, 2, 5, 6, 2, 34, 5, 2, 3, 4, 6};
    int arr2[12] = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22};

    cout << checkIfSorted(arr1, 12) << endl;
    cout << checkIfSorted(arr2, 12);

    return 0;
}