#include <iostream>

using namespace std;
 
int main() {
  int a,b, plus, minus, multi, divide, mok;
  cin >> a >> b;
  plus = a + b;
  minus = a - (b);
  multi = a * b;
  divide = a / b;
  mok = a % b;

  cout << plus << endl;
  cout << minus << endl;
  cout << multi << endl;
  cout << divide << endl;
  cout << mok;

  return 0;
}