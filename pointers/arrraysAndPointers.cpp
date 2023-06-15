#include <iostream>
using namespace std;
int main(){
    
    int arr[5] = {23, 43, 1, 2, 4};
    char ch[6] = "abcde";

    int *ptr = &arr[0];
    char *ptr2 = &ch[0];

    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *arr + 1 << endl;
    cout << ptr << " " << *ptr << endl; //prints address and value of first element

    //arr[i] == *(arr + i) == i[arr];
    //symbol table cannot be changed
    //arr = arr + 1 will give error
    //p=p+1 will output the next memory location, 
    //so the second element of the array


    //coming to character arrays
    //cout is implemented differently for
    //integer arrays and character arrays
    cout << ch << endl;
    cout << ptr2 << " " << *ptr2; //prints entire string and the first character!


    return 0;
}