//stl is c++ standard template library
//which contains many useful predefined fuctions

#include <iostream>
#include <array>//stl for creating array, barely used
#include <vector> //stl for vectors
using namespace std;
int main(){
    
    int arr[5] = {1, 2, 3, 4, 5}; //basic way of creating array

    array <int,5>myArr = {1, 2, 3, 4, 5}; //static array 

    cout << myArr.size() << endl;
    cout << myArr.at(3) << endl; //returns 4 (element at 3 index)
    cout << myArr.empty() << endl;
    cout << myArr.front() << endl;
    cout << myArr.back() << endl;

//moving on to vectors, they are dynamic arrays
//which means that on getting full
//the array automatically doubles its size
//actually it creates an array with double size
//then copys old array into it,
//and dumps the old array
    vector<int>v;
    cout << "capacity: " << v.capacity() << endl; //memory assigned
    v.push_back(2); //adds an element
    cout << "size: " << v.size() << endl; //number of elements
    v.at(2);
    v.pop_back(); //removes last element
    v.clear(); // size becomes 0 but not capacity
//front and back are also valid here



    return 0;
}