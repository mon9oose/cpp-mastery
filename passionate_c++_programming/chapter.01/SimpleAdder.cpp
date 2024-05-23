#include <iostream>

int main(void) {
  int val1;
  std::cout << "input first number : ";
  std::cin >> val1;

  int val2;
  std::cout << "input second number : ";
  std::cin >> val2;

  auto result = val1 + val2;
  std::cout << "result : " << result << std::endl;
  return 0;
}