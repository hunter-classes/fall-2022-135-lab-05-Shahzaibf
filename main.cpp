#include <iostream>


#include "funcs.h"

int main()
{ //1 is true, 0 is false
  std::cout << "Is divisble?: \n";
  std::cout << "isDivisbleBy(100,25): " << isDivisibleBy(100,25) << "\n"; //returns 1 which means true
  
  std::cout << "Is prime?: \n";
  std::cout << "isPrime(11): " << isPrime(11) << "\n";

  std::cout << "next prime: \n";
  std::cout << "nextPrime(13): " << nextPrime(13) << "\n";
  
  std::cout << "primes in a range: \n";
  std::cout << "countPrimes(5,10): " << countPrimes(5,10) << "\n";
  
  std::cout << "isTwinPrimes: \n";
  std::cout << "isTwinPrime(29): " << isTwinPrime(29) << "\n";
  return 0;
}
