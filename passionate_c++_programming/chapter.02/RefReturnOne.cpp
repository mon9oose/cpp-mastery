#include <iostream>

int &RefRetFuncOne(int &ref) {
  ref++;
  return ref;
}

int *IncOne(int *p) {
  (*p)++;
  return p;
}

int main(void) {
  int n1 = 1;
  int &n2 = RefRetFuncOne(n1);
  int *n3 = IncOne(&n1);

  n1++;
  n2++;

  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << *n3 << std::endl;

  return 0;
}