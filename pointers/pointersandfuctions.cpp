#include <iostream>
using namespace std;

void print(int *p){
    *p = *p + 1;
}

void getArr(int *arr, int size){ 
    //int arr[] or int * arr
    //do the same thing
    //they send the memory address of the first element

    //we can use this by passing something like
    //getSum(arr + 3) and will send the 
    //address at 3rd index
    //so we can send a part of the array

    //
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    
    int val = 5;
    int *p = &val;

    cout << *p  << " " << p << endl;

    print(p); //updates the value of p by manipulating the value at address

    int arr[5] = {1, 2, 3, 4, 5};

    getArr(arr, 5);

    return 0;
}