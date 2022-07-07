// Your code must return true or false (not 'true' and 'false') depending upon whether the given number is a Narcissistic number in base 10. 

#include <iostream>
#include <math.h>

bool narcissistic( int value ){
  std::string num = std::to_string(value);
  int count = 0;
  for (char x : std::to_string(value))
    count += pow(x-48, num.length());
  return count == value;
}