/* Define */

/* Prototypes */
Status checkAndCountCurrentRanges(int * readingSet, int setLength);

/* Variables */
typedef enum {
  TEST_FAIL,
  NULL_VALUE,
  NO_RANGE_COUNT,
  RANGE_COUNT_AVAILABLE
} Status;
