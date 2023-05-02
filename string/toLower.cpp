#include <iostream>
using namespace std;

char toLower(char s){
    if(s >= 'a' && s <= 'z'){
        return s;
    }
    else{
        return (s - 'A' + 'a');
    }
}

int main(){
    char s = 'T';
    cout << toLower(s);
    return 0;
}