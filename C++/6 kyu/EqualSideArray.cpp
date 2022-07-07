/*
You are going to be given an array of integers. 
Your job is to take that array and find an index N where the sum of the integers to the left of N is equal to the sum of the integers to the right of N. 
If there is no index that would make this happen, return -1.
*/

#include <vector>

int find_even_index (const std::vector <int> numbers) {
  int left_sum;
  int right_sum;
  for (size_t iter = 0; iter != numbers.size(); iter++)
  {
    left_sum = 0; 
    right_sum = 0;
    for (size_t liter = 0; liter != iter; liter++)
      left_sum += numbers[liter];
    for (size_t riter = iter+1; riter != numbers.size(); riter++)
      right_sum += numbers[riter];
    if (left_sum == right_sum)
      return iter;
  }
  return -1;
}
