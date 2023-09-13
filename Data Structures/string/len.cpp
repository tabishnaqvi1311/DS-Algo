#include <iostream>
using namespace std;

int len(char name[]){
    int i;
    for(i = 0; name[i] != '\0'; i++);
    return i + 1;
}

int main(){
    char name[20];
    cin >> name;
    cout << name << endl;
    cout << len(name); 
    return 0;
}