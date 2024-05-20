#include <iostream>

void SimpleFunc1(void);
void SimpleFunc2(void);
void SimpleFunc3(void);

int main(void) {
  try {
    SimpleFunc1();
  } catch (int expn) {
    std::cout << "Exception Code : " << expn << std::endl;
  }

  return 0;
}

void SimpleFunc1(void) {
  std::cout << "SimpleFunc1" << std::endl;
  SimpleFunc2();
}

void SimpleFunc2(void) {
  std::cout << "SimpleFunc2" << std::endl;
  SimpleFunc3();
}

void SimpleFunc3(void) {
  std::cout << "SimpleFunc3" << std::endl;
  throw -1;
}