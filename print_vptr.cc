#include <ios>
#include <iostream>

class Parent {
 public:
  Parent() {
    std::cout << "Parent's constructor" << std::endl;
    std::cout << "0x" << std::hex << *reinterpret_cast<intptr_t*>(this)
              << std::endl;
    DoStuff();
  }
  virtual ~Parent() {
    std::cout << "Parent's destructor" << std::endl;
    std::cout << "0x" << std::hex << *reinterpret_cast<intptr_t*>(this)
              << std::endl;
    DoStuff();
  }

  virtual void DoStuff() { std::cout << "Parent DoStuff" << std::endl; }
};

class Child : public Parent {
 public:
  Child() {
    std::cout << "Child's constructor" << std::endl;
    std::cout << "0x" << std::hex << *reinterpret_cast<intptr_t*>(this)
              << std::endl;
    DoStuff();
  }
  ~Child() {
    std::cout << "Child's destructor" << std::endl;
    std::cout << "0x" << std::hex << *reinterpret_cast<intptr_t*>(this)
              << std::endl;
    DoStuff();
  }

  void DoStuff() override { std::cout << "Child DoStuff" << std::endl; }
};

int main() {
  Parent* obj = new Child();
  delete obj;
}
