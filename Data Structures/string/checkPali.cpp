#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int lenStr(char c[]){
    int i;
    for(i = 0; c[i] != '\0'; i++);
    return i;
}

char toLower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    return ch - 'A' + 'a';
}

int checkPali(char c[], int len){
    int st = 0;
    int en = len - 1;
    while(st <= en){
        if(toLower(c[st]) != toLower(c[en])){
            return 0;
        }
        else{
            st++;
            en--;
        }
    }
    return 1;
}

int main(){
    char s[100];
    cin >> s;
    int len = lenStr(s);
    cout << checkPali(s, len);
    return 0;
}