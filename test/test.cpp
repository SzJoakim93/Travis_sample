#include <catch.hpp>

int square(int a)
{
    return a*a;
}

int cube(int a)
{
    return a*a*a;
}

bool isPrime(int number)
{
    if (number == 1)
        return false;
        
    for (int i = 2; i<= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

TEST_CASE( "square", "first" ) {
	REQUIRE( square(3) == 9 );
}

TEST_CASE( "cube", "first" ) {
	REQUIRE( cube(3) == 27 );
}

TEST_CASE( "prime", "first" ) {
	REQUIRE( isPrime(3) == true );
}