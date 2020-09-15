int func2(const int a, const int b) {
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
