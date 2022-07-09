// Write an algorithm that takes an array and moves all of the zeros to the end, preserving the order of the other elements.

#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  size_t count = 0;
  std::vector<int> vec;
  for (int i : input) {
    if (i == 0)
        count++;
    else
      vec.push_back(i);
  }
  while(count--)
    vec.push_back(0);

  return vec;
}