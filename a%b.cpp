// a / b 문제임
// #include <iostream>

// int main() {
//   using namespace std;
//   float num1, num2, nanugi =0;
//   cin >> num1 >> num2;
//   nanugi = num1 / num2;
//   cout << nanugi;
//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout.precision(10);
    cout << fixed << (double)a / b << endl;
    return 0;
}
