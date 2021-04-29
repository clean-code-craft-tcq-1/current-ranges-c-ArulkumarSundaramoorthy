/* Header Files */
#include "bms_current_range.h"
#include "math.h"

Status checkAndCountCurrentRanges(int * readingSet, int setLength)
{
  if((readingSet == NULL) || (setLength == 0))
  {
    return NULL_VALUE;
  }
  return TEST_FAIL;
}
