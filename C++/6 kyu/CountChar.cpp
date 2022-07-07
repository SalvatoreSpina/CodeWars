/*
The main idea is to count all the occurring characters in a string. If you have a string like aba, then the result should be {'a': 2, 'b': 1}.
What if the string is empty? Then the result should be empty object literal, {}.
*/

#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& str) {
  std::map<char, unsigned> maps;
  if (str == "")
    return maps;
  for (int i = 0; i < str.length(); i++)
    maps[str[i]] += 1;
  return maps;
}