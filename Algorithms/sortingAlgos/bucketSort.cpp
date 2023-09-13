// bucket sort works by distributing
// the elements into a number of buckets
// then each bucket is sorted individually

//how it works
//first create an array of buckets
//go over oroginal array, putting each in a bucket
//then sort each non empty bucket
//finally put all the elements back in place from the buckets

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void bucketSort(int arr[], int sizeOfArray){
    //create a vector array of "sizeOfArray" elements
    //where each element is a vector in of itself
    vector<int> bucket[sizeOfArray];

    //go over original array
    //putting elemnts of arr in bucket
    for(int i = 0; i < sizeOfArray; i++){
        int indexInBucket = sizeOfArray * arr[i];
        bucket[indexInBucket].push_back(arr[i]);
    }

    //sort each bucket
    for(int i = 0; i < sizeOfArray; i++){
        sort(bucket[i].begin(), bucket[i].end());
    }

    int index = 0;
    for(int i = 0; i < sizeOfArray; i++){
        for(int j = 0; j < bucket[i].size(); j++){
            arr[index] = bucket[i][j];
            index++;
        }
    }
}

int main(){
    int arr[5] = {9, 4, 3, 2 ,4 };
    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr, sizeOfArray);

    for(int i = 0 ; i < sizeOfArray; i++){
        cout << arr[i] << " ";
    }
    return 0;
}