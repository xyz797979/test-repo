#include <stdio.h>

int func1(const int a, const int b) {
  int ret = a + b;
  ret += a * b;
  ret += a - b;
  return ret;
}

int func2(const int m, const int n) {
  int ret = m + n;
  ret += m * n;
  ret += m - n;
  return ret;
}

int main() {
  int x = 1;
  int y = 2;

  printf("%d\n", func1(x, y));
  printf("%d\n", func2(x, y));

  return 0;
}
