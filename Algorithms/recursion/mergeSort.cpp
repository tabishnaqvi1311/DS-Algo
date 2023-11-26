#include <iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2;
    //calc len
    int len1 = mid - s + 1;
    int len2 = e - mid;
    //create two smaller arrays
    int *first = new int[len1];
    int *second = new int[len2];
    //copy values to smaller arrays
    int main = s;
    for(int i = 0; i < len1; i++) first[i] = arr[main++];
    main = mid+1;
    for(int i = 0; i < len2; i++) second[i] = arr[main++];
    //merge two sorted arrays
    int i = 0, j = 0; 
    main = s;
    while(i < len1 && j < len2){
        if(first[i] < second[j]) arr[main++] = first[i++];
        else arr[main++] = second[j++];
    }
    while(i < len1) arr[main++] = first[i++];
    while(j < len2) arr[main++] = second[j++];

    //free the dynamically allocated mem
    delete []first;
    delete []second;
}


void mergeSort(int *arr, int s, int e){
    //base case
    if(s >= e) return;
    int mid = s + (e-s)/2;
    //left part
    mergeSort(arr, s, mid);
    //right part
    mergeSort(arr, mid+1, e);
    //main function that actually does the sorting
    merge(arr, s, e);
}

int main(){
    int arr[5] = {5, 3, 1, 5, 6};
    int n = 5;
    mergeSort(arr, 0, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}