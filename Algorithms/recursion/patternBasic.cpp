#include <iostream>
using namespace std;

void printPattern(int r, int c = 0){
    if(r > c) {
        printPattern(r, c+1);
        cout << "*";
    }

    if(r==c){
        printPattern(r-1, 0);
        cout << endl;
    }

    return;
}

int main(){
    
    int rows;
    cin >> rows;

    printPattern(rows);

    return 0;
}