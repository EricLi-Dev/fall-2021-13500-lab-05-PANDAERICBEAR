#include <iostream>
#include "funcs.h"

// add functions here
bool isDivisible(int n, int d){
  return (n % d == 0) ? true : false;
}

bool isPrime(int n){
  for(int i = ((n <= 1) ? 1 : (n <= 3) ? 3 : 2); i < ((n - 1 <= 0 ? 2 : (n-1))); i++){
    if(isDivisible(n, i)){
      return false;
    }
  }
  return true;
}

int nextPrime(int n){
  while(true){
    n = n+1;
    if (isPrime(n)){
      return n;
    }
  }
  return 0;
}

int countPrimes(int a, int b){
  int counter = 0;
  for(int i = a; i <= b; i++){
    if (isPrime(i)){
      counter++;
    }
  }
  return counter;
}

bool isTwinPrime(int n){
  return ((isPrime(n)) && ((isPrime(n-2)) || (isPrime(n+2)))) ? true : false;
}

int nextTwinPrime(int n){
  while(true){
    n++;
    if (isTwinPrime(n)){
      return n;
    }
  }
  return 0;
}

int largestTwinPrime(int a, int b){
  int counter = b;
  while((counter > a) && (!isTwinPrime(counter))){
    counter--;
  }
  return isTwinPrime(counter) ? counter : -1;
}
