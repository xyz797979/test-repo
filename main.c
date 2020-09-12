#include "Func.h"

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

int func2(const int m, const int n) {
  int ret = 0;
  ret += m * n;
  ret += m - n;
  ret += m + n;
  ret <<= 2;
  ret += ret - 1;
  ret -= 1;
  ret *= ret;
  ret >>= 1;
  return ret;
}

int func3() {
  int ret = 10;
  ret <<= 2;
  ret += ret - 1;
  ret -= 1;
  ret *= ret;
  ret >>= 1;
  return ret;
}

int func4() {
  int ret = 10;
  ret <<= 2;
  ret += ret - 1;
  ret -= 1;
  ret *= ret;
  ret >>= 1;
  return ret;
}

int main() {
  int x = 1;
  int y = 2;

  printf("%d\n", func1(x, y));
  printf("%d\n", func2(x, y));
  printf("%d\n", func3());
  printf("%d\n", func4());
  printf("%d\n", func5());

  return 0;
}
