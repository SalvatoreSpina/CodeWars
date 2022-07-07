/* 
Complete the solution so that it splits the string into pairs of two characters. 
If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').
*/

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
  std::vector<std::string> ret;  
  for (size_t i = 0; i < s.length(); i+=2)
  {
    std::string tmp = "";
    tmp = s[i];
    (s[i+1]) ? tmp += s[i+1] : tmp += "_";
    ret.push_back(tmp);
  }
    return ret;
}