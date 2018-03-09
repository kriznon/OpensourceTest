//#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "sample_example.h"


TEST_CASE( "Average 3 numbers", "[AverageThreeBytes]" ) {
    REQUIRE( AverageThreeBytes(15,15,15) == 15 );
    REQUIRE( AverageThreeBytes(15,16,17) == 16 );
}

