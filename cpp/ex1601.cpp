#include <iostream>

class A {
 public:
  void Set(int i) {
    x = i;
  }
  void Display() {
    std::cout << x << std::endl;
  }

 protected:
  int x;
};

class B : public A {
 public:
  void Set(int i, int j) {
    x = i;
    y = j;
  }
  void Display() {
    std::cout << x << ", " << y << std::endl;
  }

 private:
  int y;
};

int main() {
  B* bptr = new B();
  bptr->Display();
  A* aptr = bptr;
  aptr->Display();
  return 0;
}
