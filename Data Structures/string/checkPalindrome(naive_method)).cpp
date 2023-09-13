#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int lenStr(char s[]){
    int count = 0;
    for(int i = 0; s[i]!='\0'; i++){
        count++;
    }
    return count-1;
}

int main(){
    char s[100];
    cin >> s;
    int ct = lenStr(s);
    char scopy[100];
    strcpy(scopy, s);
    int start = 0;
    int end = ct;

    while(start < end){
        swap(scopy[start++], scopy[end--]);
    }

    int pal=0;
    for(int i = 0; i < ct; i++){
        if(s[i] == scopy[i]){
            pal++;
        }
    }

    pal==ct?cout<<1:cout<<0;
    return 0;
}