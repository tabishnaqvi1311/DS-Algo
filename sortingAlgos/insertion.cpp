//take an element, compare it with the previous
//or the next element
//and decide whether to move it to the left 
// or to the right
// and shift the element between which the element has to be INSERTED
//n rounds
#include <iostream>
using namespace std;

int insertion(int arr[], int size){
    for(int i = 0; i < size; i++){
        int fixed = arr[i];
        int j = i - 1;
        for(;j>=0;j--){
            if(arr[j] > fixed){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }   
        arr[j+1] = fixed;
    }
}

int main(){
    int myArr[5] = {3, 54,65, 23, 65};
    insertion(myArr, 5);
    return 0;
}