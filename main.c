#include <stdio.h>

int func1(const int a, const int b) {
  int ret = 0;
  ret += a * b;
  ret += a - b;
  ret += a + b;
  ret <<= 2;
  ret += ret - 1;
  ret -= 1;
  ret *= ret;
  ret >>= 1;
  return ret;
}

int func2(const int a, const int b) {
  int ret = 0;
  ret += a * b;
  ret += a - b;
  ret += a + b;
  ret <<= 2;
  ret += ret - 9;
  ret -= 1;
  ret *= ret;
  ret >>= 1;
  return ret;
}

int main() {
  int x = 1;
  int y = 2;

  printf("%d\n", func1(x, y));

  return 0;
}
