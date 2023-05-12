#include <iostream>
using namespace std;

bool isPresent(int arr[3][3], int rows, int cols, int target){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    
    int arr[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    int target;
    cin >> target;

    isPresent(arr, 3, 3, target)?(cout<< "YES"):(cout<<"NO");

    return 0;
}