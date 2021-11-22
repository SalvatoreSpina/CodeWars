#include <stdlib.h>

/* You are given an array (which will have a length of at least 3, but could be very large) containing integers. The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. 
Write a method that takes the array as an argument and returns this "outlier" N. */

int find_outlier(const int *values, size_t count)
{
  int i = 0;
  int oddflag = 0;
  int evenflag = 0;
  int firstodd = 0;
  int firsteven = 0;
  
  while (i < (int) count)
  {
    if (values[i] % 2 == 0)
    {
      evenflag++;
      firsteven = i;
      i++;
    }
    else
    {
      oddflag++;
      firstodd = i;
      i++;
    }
  }
  if (oddflag == 1)
    return values[firstodd];
  return values[firsteven];
}