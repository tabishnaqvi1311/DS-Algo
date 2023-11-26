#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int find){
    for(int i = 0; i < size; i++){
        if(arr[i] == find){
        cout << "Element found at index" << i;
        return 1;
        }
    }
    cout << "Not found :(";
    return -1;
}

int main(){
    int arr[5] = {1, 2, 4, 5, 6};
    int find;
    cin >> find;
    linearSearch(arr, 5, find);
    return 0;
}