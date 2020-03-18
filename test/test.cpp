#include <catch.hpp>

#include "../src/utils.h"

TEST_CASE( "square", "first" ) {
	REQUIRE( square(3) == 9 );
}

TEST_CASE( "cube", "first" ) {
	REQUIRE( cube(3) == 27 );
}

TEST_CASE( "prime", "first" ) {
	REQUIRE( isPrime(3) == true );
}