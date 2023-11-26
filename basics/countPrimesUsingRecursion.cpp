//Assume there is a Boolean method isPrime(n), where n is an
// integer greater than 1, that returns true if n is prime and false
// otherwise. Write a recursive method that returns the number of
// primes in the range a to b.
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1) return 0;
    for(int i = 2; i < n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int countPrimes(int x, int y){
    if(x>y) return 0;
    if(isPrime(x)) return 1 + countPrimes(x+1, y);
    return countPrimes(x+1, y);
}

int main(){

    int a = 1;
    int b = 10;
    cout << countPrimes(a, b);
    return 0;
}