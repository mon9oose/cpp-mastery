#include <iostream>

int &RefRetFuncOne(int &ref) {
  ref++;
  return ref;
}

int &simpleFunc(int data) {
  data++;
  return data;
}

int main(void) {
  int n1 = 1;
  // int &ref = n1;
  // int n2 = ref;
  int n2 = RefRetFuncOne(n1);
  int n3 = simpleFunc(n1);
  int &n4 = simpleFunc(n1);

  n1 += 1;
  n2 += 100;
  n3 += 1000;
  n4 += 10000;

  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << n3 << std::endl;
  std::cout << n4 << std::endl;

  return 0;
}