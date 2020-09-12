#include <stdio.h>

int func1(const int a, const int b) {
  int ret = a + b;
  ret += a * b;
  ret += a - b;
  return ret;
}

int main() {
  int x = 1;
  int y = 2;

  printf("%d\n", func1(x, y));

  return 0;
}
