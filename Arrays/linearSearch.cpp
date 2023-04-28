#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int searchTerm){
    for(int i = 0; i < size; i++){
        if(arr[i]==searchTerm){
            cout << "Element" << arr[i] << "found at" << i;
            return 1;
        }
    } 
    cout << "Element not found";
    return 0;
}


int main(){
    int arr[5];
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    cout << "Search for?\n";
    int searchTerm;
    cin >> searchTerm;
    linearSearch(arr, 5, searchTerm);
    return 0;
}