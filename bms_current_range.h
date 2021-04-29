/* Define */
#define ACCEPTABLE_RANGE 2

/* Type Def */
typedef enum {
  TEST_FAIL,
  NULL_VALUE,
  NO_RANGE_COUNT,
  RANGE_COUNT_AVAILABLE
} Status;

/* Prototypes */
Status checkAndCountCurrentRanges(int * readingSet, int setLength);


