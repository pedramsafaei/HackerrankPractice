
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";

  // Declare second integer, double, and String variables.
  int integer;
  double decimal;
  string word;
  // Read and save an integer, double, and String to your variables.
  // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
  cin >> integer >> decimal;
  cin.ignore();
  getline(cin, word);
  // Print the sum of both integer variables on a new line.
  cout << integer + i << endl;
  // Print the sum of the double variables on a new line.
  cout << fixed << setprecision(1) << decimal + d << endl;
  // Concatenate and print the String variables on a new line
  cout << s.append(word) << endl;
  // The 's' variable above should be printed first.
  return 0;
}