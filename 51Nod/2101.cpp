// Link:https://www.51nod.com/Challenge/Problem.html#problemId=2101
#include <iostream>
#define BT ios::sync_with_stdio(false), std::cin.tie(0), std::cout.tie(0);
using namespace std;
int main() {
  BT int a, b;
  bool flag = false;
  cin >> a >> b;
  if (a > 0 && b > 0) {
    if (a + b < a) flag = true;
  } else if (a > 0) {
    if (a + b > a || a + b < b) flag = true;
  } else if (b > 0) {
    if (a + b < a || a + b > b) flag = true;
  } else if (a + b > a)
    flag = true;
  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}