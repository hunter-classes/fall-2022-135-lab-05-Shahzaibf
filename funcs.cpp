#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d){
    return n % d == 0;
}

bool isPrime(int n){
    if (n <= 1){
        return false;
    }
    for(int i = 2;i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    int nextnum = n + 1;
    while(!isPrime(nextnum)){
        nextnum++;
    }
    return nextnum;
}

int countPrimes(int a, int b){
    int count = 0;
    for (int i = a; i <= b; i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}

bool isTwinPrime(int n){
    if (isPrime(n)){
        if(isPrime(n + 2) || isPrime(n - 2)){
            return true;
      }
    }
    return false;
}

int nextTwinPrime(int n){
    int nextnum = n + 1;
    while(!isTwinPrime(nextnum)){
        nextnum++;
    }
    return nextnum;
}

int largestTwinPrime(int a, int b){
    for(int num = b; num >= a; num--){
        if(isTwinPrime(num)){
            return num;
        }
    }
    return -1;
}