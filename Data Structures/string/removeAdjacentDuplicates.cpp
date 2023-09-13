#include <iostream>
#include <string.h>
using namespace std;

string checkForDup(string s){
    int st = 0, e = 1;
    bool it = 0;
    
    while(e < s.length()){
        cout << s[st] << " " << s[e] << " then " << endl;
        if(s[st] == s[e]){
            s.erase(st, 2);
            it = 1;
            st = 0;
            e = 1;
        }
        else{
            e += 1;
            st += 1;
        }
    }f
    if(it){
        checkForDup(s);
    }
    return s;
}

int main(){
    string s = "abbaca";

    s = checkForDup(s);

    cout << "final ans-> " << s;
    return 0;
}