#include <iostream>
#include <string>
using namespace std;

void skip(string word, string ans = ""){
    if(word == ""){
        cout << ans;
        return;
    }

    char ch = word.at(0);

    if(ch == 'a'){
        skip(word.erase(0, 1), ans);
    }
    else{
        ans.push_back(ch);
        skip(word.erase(0, 1), ans);
    }
}

int main(){
    
    string word = "baccad";

    skip(word);
    // cout << word.at(0);

    return 0;
}