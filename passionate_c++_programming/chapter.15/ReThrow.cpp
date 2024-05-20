#include <iostream>

void Divide(int n1, int n2) {
  try {
    if (n2 == 0) throw 0;
    std::cout << "몫 : " << n1 / n2 << std::endl;
    std::cout << "나머지 : " << n1 % n2 << std::endl;
  } catch (int expn) {
    std::cout << "first catch" << std::endl;
    throw;
  }
}

int main(void) {
  try {
    Divide(9, 2);
    Divide(4, 0);
  } catch (int expn) {
    std::cout << "second catch" << std::endl;
  }
  return 0;
}