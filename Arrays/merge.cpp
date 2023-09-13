#include <iostream>
using namespace std;

int mergeSortedArrays(int arr1[], int arr2[], int m, int n){
    int j = 0;
    for(int i = 0; i < m + n; i++){
        arr1[i] = arr2[j++];
    }
    SortIt()

}

int main(){
    
    int arr1[6] = {1, 2, 3, 0, 0, 0};
    int arr2[3] = {1, 2, 3};

    int elesInarr1 = 3;
    int elesInarr2 = 3;

    mergeSortedArrays(arr1, arr2, elesInarr1, elesInarr2);

    return 0;
}