#include <iostream>

int main(void) {
  int result = 0;
  for (auto i = 0; i < 5; ++i) {
    std::cout << "input " << i + 1 << "th number : ";
    int num;
    std::cin >> num;
    result += num;
  }
  std::cout << "result : " << result << std::endl;
  return 0;
}