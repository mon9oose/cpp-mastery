#include <iostream>

namespace hybrid {
void HybFunc() {
  std::cout << "so simple func" << std::endl;
  std::cout << "in namespace hybrid" << std::endl;
}
}  // namespace hybrid

int main(void) {
  using hybrid::HybFunc;
  HybFunc();
  return 0;
}