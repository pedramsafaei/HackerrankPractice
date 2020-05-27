#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  vector<string> words{"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  for (; a <= b; a++)
  {
    if (a > 9)
      a % 2 == 0 ? cout << "even" << endl : cout << "odd" << endl;
    else
      cout << words[a] << endl;
  }
  return 0;
}