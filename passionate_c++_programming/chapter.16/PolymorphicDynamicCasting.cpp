#include <iostream>

class Simple {
 public:
  virtual void ShowInfo() { std::cout << "Simple Information" << std::endl; }
};

class Complex : public Simple {
 public:
  void ShowInfo() { std::cout << "Complex Information" << std::endl; }
};

int main(void) {
  Simple *s = new Complex();
  Complex *c = dynamic_cast<Complex *>(s);
  c->ShowInfo();

  return 0;
}