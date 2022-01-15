/* Are the numbers in order?
In this Kata, your function receives an array of integers as input. Your task is to determine whether the numbers are in ascending order. An array is said to be in ascending order if there are no two adjacent integers where the left integer exceeds the right integer in value.

For the purposes of this Kata, you may assume that all inputs are valid, i.e. non-empty arrays containing only integers.

Note that an array of 1 integer is automatically considered to be sorted in ascending order since all (zero) adjacent pairs of integers satisfy the condition that the left integer does not exceed the right integer in value. An empty list is considered a degenerate case and therefore will not be tested in this Kata - feel free to raise an Issue if you see such a list being tested. */

#include <stddef.h>
#include <stdbool.h>

bool in_asc_order(const int *arr, size_t arr_size) {

  size_t i = 0;
  if (arr_size == 1)
    return true;
  while (i < arr_size - 1){
    if (arr[i] <= arr[i+1])
      i++;
    else
      return false;
  }
  return true;
}