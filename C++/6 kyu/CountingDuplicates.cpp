/*
Count the number of Duplicates
Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.
*/

#include <map>
#include <cstring>

size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* in)
{
  size_t count = 0;
  std::string str = std::string(in);
  
  for (size_t i = 0; i < strlen(in); i++)
    str[i] = std::toupper(in[i]);
  
  std::cout << str << std::endl;
  
  std::map<char, int> maps;
  
  for (size_t i = 0; i < str.length(); i++)
    maps[str[i]] += 1;
  
  for (auto iter = maps.begin(); iter != maps.end(); iter++)
  {
    if (iter->second > 1)
      count++;
  }
  return count;
}