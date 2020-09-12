#include <stdio.h>
#include <stdlib.h>

int func1(const int a, const int b) {
  int ret = 0;
  ret += a * b;
  ret += a - b;
  ret += a * b;
  ret += a - b;
  return ret;
}

int func2(const int m, const int n) {
  int ret = 0;
  ret += m * n;
  ret += m - n;
  ret += m * n;
  ret += m - n;
  return ret;
}

int func3(const double a, const double b) {
  double ret = 0.0;
  ret += a * b;
  ret += a + b;
  ret += a * b;
  ret += a + b;
  return (int)ret;
}

int func4(const int m, const int n) {
  int ret = 0;
  ret += m * n;
  ret += m - n;
  ret += m * n;
  ret += m - n;
  return ret;
}

int main() {
  int x = 1;
  int y = 2;

  printf("%d\n", func1(x, y));
  printf("%d\n", func2(x, y));
  printf("%d\n", func3(x, y));
  printf("%d\n", func4(x, y));

  char *ptr = (char *)malloc(sizeof(char) * 10);
  int *p = (int *)malloc(sizeof(int) * 5);
  free(p);
  int unused_value = 99;

  return 0;
}
