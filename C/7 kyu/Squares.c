/* Given an integral number, determine if it's a square number */

#include <stdbool.h>

bool is_square(int n) {

    int i = 0;
  
  if (n == 0 || n == 1)
    return true;
    while (i++ <= n / 2 && i < 46342)
      {
      if (i * i == n)
        return true;
    }
  return false; 
}