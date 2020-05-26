#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";
  int integer;
  double decimal;
  string word;
  cin >> integer >> decimal;
  cin.ignore();
  getline(cin, word);
  cout << integer + i << endl;
  cout << fixed << setprecision(1) << decimal + d << endl;
  cout << s.append(word) << endl;
  return 0;
}