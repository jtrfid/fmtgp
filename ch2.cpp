#include <iostream>
#include <string>

using namespace std;

int multiply0(int n, int a) {
  if (n == 1) return a;
  return multiply0(n - 1, a) + a;
}

bool odd(int n) { return n & 0x1; }
int half(int n) { return n >> 1; }

int multiply1(int n, int a) {
  if (n == 1) return a;
  int result = multiply1(half(n), a + a);
  if (odd(n)) result = result + a;
  return result;
}

int multiply_by_15(int a) {
  int b = (a + a) + a;
  int c = b + b;
  return (c + c) + b;
}

int main() {
  int p = multiply0(10, 5);
  std::cout << p << std::endl;

  p = multiply1(10, 7);
  std::cout << p << std::endl;

  p = multiply_by_15(5);
  std::cout << p << std::endl;
  
  return 0;
}
