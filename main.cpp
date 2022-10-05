#include <iostream>


#include "funcs.h"

int main()
{ //1 is true, 0 is false
  std::cout << "Is divisble?: \n";
  std::cout << "isDivisbleBy(100,25): " << isDivisibleBy(100,25) << "\n"; //returns 1 which means true
  std::cout << "Is prime?: \n";
  std::cout << "isPrime(11): " << isPrime(11) << "\n";
  return 0;
}
