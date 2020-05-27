#include <algorithm>
#include <functional>
#include <array>
#include <iostream>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
  array<int, 4> s = {a, b, c, d};
  std::sort(s.begin(), s.end());
  return s.back();
}
int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);
  return 0;
}