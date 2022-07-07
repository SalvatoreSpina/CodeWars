/*
Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.
Example
createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) // => returns "(123) 456-7890"
The returned format must be correct in order to complete this challenge.
Don't forget the space after the closing parentheses!
*/

#include <string>

#define ADD(x) std::to_string(arr[x])

std::string createPhoneNumber(int arr [10]){
  std::string phone;
  phone = "(" + ADD(0) + ADD(1) + ADD(2) + ")";
  phone += " " + ADD(3) + ADD(4) + ADD(5);
  phone += "-" + ADD(6) + ADD(7) + ADD(8) + ADD(9);
  return phone;
}