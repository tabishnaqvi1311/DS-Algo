#include <iostream>
using namespace std;

int len(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count - 1;
}

int main(){
    char name[100];
    cin >> name;
    int s = 0;
    int e = len(name);

    while(s<e){
        swap(name[s++], name[e--]);
    }

    cout << name;
    return 0;
}