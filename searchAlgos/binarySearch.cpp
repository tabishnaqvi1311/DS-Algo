#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int term){
    int s = 0;
    int e = size - 1;
    int mid = (s + e)/2;

    while(s <= e){
        cout << "In while loop";
        if(term == arr[mid]){
            cout << "Element found at " << mid;
            return 1;
        }
        else if(term > arr[mid]){
            s = mid + 1;
        }   
        else{
            e = mid - 1;
        }
        mid = (s + e)/2;
    }
    cout << "nope";
    return 0;
}


int main(){
    int myArr[100];

    int n, toSearch;
    cout << "Enter number of terms in array";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> myArr[i];
    }

    cout << "\nWhat to search?";
    cin >> toSearch;

    binarySearch(myArr, n, toSearch);
    return 0;
}