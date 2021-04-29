#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "bms_current_range.h"
#include "stdlib.h"
#include "math.h"

TEST_CASE("1. Fail Test case to check NULL values")
{
    int readingSet[] = {0};
     Status testStatus;
    int setLength = sizeof(readingSet) / sizeof(readingSet[0]);
    testStatus  = checkAndCountCurrentRanges(readingSet, setLength);
    REQUIRE(testStatus == TEST_FAIL);
}

TEST_CASE("2. Pass Test case to check NULL values")
{
    int readingSet[] = {0};
     Status testStatus;
    int setLength = sizeof(readingSet) / sizeof(readingSet[0]);
    testStatus  = checkAndCountCurrentRanges(readingSet, setLength);
    REQUIRE(testStatus == TEST_FAIL);
}
