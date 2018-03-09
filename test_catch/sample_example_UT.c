//#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../find_three_number_average.h"


TEST_CASE( "Average 3 numbers", "[AverageThreeBytes]" ) {
    REQUIRE( find_three_number_average(15,15,15) == 15 );
    REQUIRE( find_three_number_average.h(15,16,17) == 16 );
}

