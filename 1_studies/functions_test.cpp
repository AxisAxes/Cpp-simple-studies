#include <iostream>

int power_mt(int base, int exp) {
  int result { base };
  for (int i = 1; i < exp; i++) {
    result = result * base;
  }
  return result;
}

int main (int argc, char *argv[])
{
  int r { 0 };
  r = power_mt(2, 3);
  std::cout << r << std::endl;
  return 0;
}
