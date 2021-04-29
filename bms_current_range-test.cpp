#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "bms_current_ranges.h"
#include "stdlib.h"
#include "math.h"

TEST_CASE("Test case to check NULL values")
{
    float readingSet[] = NULL;
    int setLength = sizeof(readingSet) / sizeof(readingSet[0]);
    Status testStatus  = checkAndCountCurrentRanges(readingSet, setLength);
    REQUIRE(testStatus == 1);
}
