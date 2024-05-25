#include <iostream>

namespace BaseComIpm1 {
void SimpleFunc(void) { std::cout << "BestCom" << std::endl; }
}  // namespace BaseComIpm1

namespace ProgComImpl {
void SimpleFunc(void) { std::cout << "ProgCom" << std::endl; }
}  // namespace ProgComImpl

int main(void) {
  BaseComIpm1::SimpleFunc();
  ProgComImpl::SimpleFunc();
  return 0;
}