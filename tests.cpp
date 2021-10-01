#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("isDivisible"){
  SUBCASE("Base"){
    //CHECK(isDivisible(0, 0) == true); //edge case
    CHECK(isDivisible(0, 1) == true);
    //CHECK(isDivisible(1, 0) == false); //edge case
    CHECK(isDivisible(1, 1) == true);
  }

  SUBCASE("Small"){
    CHECK(isDivisible(4, 2) == true);
    CHECK(isDivisible(8, 5) == false);
    CHECK(isDivisible(9, 3) == true);
  }

  SUBCASE("Big"){
    CHECK(isDivisible(1000, 25) == true);
    CHECK(isDivisible(145, 32) == false);
    CHECK(isDivisible(869, 27) == false);
  }
}

TEST_CASE("isPrime"){
  SUBCASE("Base"){
    CHECK(isPrime(-1) == false);
    CHECK(isPrime(0) == false);//should be false
    CHECK(isPrime(1) == false);
  }

  SUBCASE("Small"){
    CHECK(isPrime(2) == true);
    CHECK(isPrime(3) == true);
    CHECK(isPrime(6) == false);
    CHECK(isPrime(7) == true);
  }

  SUBCASE("Big"){
    CHECK(isPrime(797) == true);
    CHECK(isPrime(800) == false);
    CHECK(isPrime(6653) == true);
  }
}

TEST_CASE("nextPrime"){
  SUBCASE("Base"){
    CHECK(nextPrime(-1) == 2);
    CHECK(nextPrime(1) == 2);
  }

  SUBCASE("Small"){
    CHECK(nextPrime(2) == 3);
    CHECK(nextPrime(5) == 7);
    CHECK(nextPrime(9) == 11);
  }

  SUBCASE("Big"){
    CHECK(nextPrime(748) == 751);
    CHECK(nextPrime(278) == 281);
    CHECK(nextPrime(345) == 347);
  }
}

TEST_CASE("countPrimes"){
  SUBCASE("Base"){
    CHECK(countPrimes(0, 0) == 0);
    CHECK(countPrimes(1, 0) == 0); //checker for if b is less than 1
  }

  SUBCASE("Small"){
    CHECK(countPrimes(2, 5) == 3);
    CHECK(countPrimes(3, 9) == 3);
  }

  SUBCASE("Big"){
    CHECK(countPrimes(17, 64) == 12);
    CHECK(countPrimes(1, 30) == 10);
  }
}

TEST_CASE("isTwinPrime"){
  SUBCASE("Base"){
    CHECK(isTwinPrime(-1) == false);
    CHECK(isTwinPrime(0) == false);
  }
  SUBCASE("Small"){
    CHECK(isTwinPrime(2) == false);
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(5) == true);
  }
  // SUBCASE("Big"){
  //   CHECK(isTwinPrime())
  // }
}
