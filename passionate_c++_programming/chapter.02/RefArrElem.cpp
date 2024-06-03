#include <iostream>

// using namespace std;

int main(void) {
  int arr[3] = {1, 3, 5};
  int &ref1 = arr[0];

  std::cout << ref1 << std::endl;

  return 0;
}