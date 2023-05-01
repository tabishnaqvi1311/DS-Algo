#include <iostream>
using namespace std;

int len(char name[]){
    int count;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count - 1;
}

int main(){
    
    char name[20];
    cin >> name;
    cout << name << endl;
    cout << len(name); 
    return 0;
}