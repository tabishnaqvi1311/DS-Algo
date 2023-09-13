#include <iostream>
using namespace std;
int main(){
    
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7 ,8, 9};

    cout << "Starting matrix" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(!(i == j)){
                swap(matrix[i][j], matrix[i+2][j]);
                swap(matrix[i+2][j], matrix[i][j+2]);
                swap(matrix[i][j+2], matrix[i+2][j]);
            }
        }
    }

    cout << "resultant matrix" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}