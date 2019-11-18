#include <iostream>
using namespace std;

int main(void) {
  float a = 3.0;
  float b = 2.0;

  int c = 3;
  int d = 2;
  cout << "3.0 / 2.0 =" << a/b << '\n';
  cout << "3   / 2   =" << c/d << '\n';

  cout << "3.0 /2    =" << a/d << '\n';
  cout << "3   /2.0  =" << c/b << '\n';
  
}
