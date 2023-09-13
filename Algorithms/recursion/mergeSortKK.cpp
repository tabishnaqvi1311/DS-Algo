#include <iostream>
using namespace std;

int merge(int *arr, int s, int e){
    int mid = s + (e - s)/2;

    int len1 = mid - s + 1, len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int main = s;
    for(int i = )
}

int mergeSort(int *arr, int s, int e){
    if(s >= e){
        int mid = s + (e-s)/2;

        mergeSort(arr, s, mid);
        mergeSort(arr, mid+1, e);
        merge(arr, s, e);
    }
}

int main(){
    
    int arr[5] = {4, 5, 2, 5, 7};
    int n = 5;

    mergeSort(arr, 0, n);

    return 0;
}