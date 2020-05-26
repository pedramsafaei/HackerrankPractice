#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <sstream>

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  std::vector<int> v;
  std::string line;

  std::getline(std::cin, line);
  std::stringstream sstream(line);
  int i;

  while (sstream >> i)
  {
    v.push_back(i);
  }
  std::cout << accumulate(v.begin(), v.end(), 0);

  return 0;
}