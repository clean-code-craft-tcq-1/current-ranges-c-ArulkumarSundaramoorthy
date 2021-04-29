/* Define */

/* Prototypes */
int checkAndCountCurrentRanges(const float* readingSet, int setLength);

/* Variables */
typedef enum {
  NULL_VALUE = 1,
  NO_RANGE_COUNT,
  RANGE_COUNT_AVAILABLE
} Status;
