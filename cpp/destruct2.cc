#include <iostream>

class A {
 public:
  virtual ~A() = default;
};

class B {
 public:
  virtual ~B() = default;
};

class C : public A {
 public:
  ~C() override {
    std::cout << "~C" << std::endl;
  }
};

class D : public C,
          public B {
 public:
  ~D() override {
    std::cout << "~D" << std::endl;
  }
};

int main() {
  B* d1 = new D();
  C* d2 = new D();
  A* d3 = new D();

  delete d1;
  std::cout << "----------------------------------" << std::endl;
  delete d2;
  std::cout << "----------------------------------" << std::endl;
  delete d3;
}
