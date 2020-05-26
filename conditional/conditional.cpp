#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  vector<string> words{"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  if (n < 10)
  {
    cout << words[n] << endl;
  }
  else
  {
    cout << "Greater than 9" << endl;
  }
  return 0;
}
