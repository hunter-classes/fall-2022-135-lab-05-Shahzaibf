#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("is Divisible By? \n"){
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
}

TEST_CASE("is prime number? \n"){
    CHECK(isPrime(2) == true);
    CHECK(isPrime(4) == false);
    CHECK(isPrime(19) == true);
    CHECK(isPrime(20) == false);
}
