//#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../find_three_number_avg.h"


TEST_CASE( "Average 3 numbers", "[find_three_number_average]" ) {
    REQUIRE( find_three_number_average(15,15,15) == 15 );
    REQUIRE( find_three_number_average(15,16,17) == 16 );
}
/*
TEST_CASE( "Average 3 numbers to fail", "[find_three_number_average]" ) {
    REQUIRE( find_three_number_average(15,15,15) == 17 );
    REQUIRE( find_three_number_average(15,16,17) == 18 );
}
*/
