#include <iostream>
using namespace std;

int max(int arr[], int size){
    int max = arr[0];
    for (int i = 0; i < size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }   
    return max;
}

int min(int arr[], int size){
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}


int main(){
    int arr[5];
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    cout << "Max " << max(arr, 5) << "\n";
    cout << "Min " << min(arr, 5);
    
    return 0;
}