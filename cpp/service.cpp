#include <iostream>

class Service {
 public:
  virtual void Method1() = 0;
  virtual void Method2() = 0;
};

template <class Base>
class Async_Method1 : public Base {
 public:
  void Method1() override {
    std::cout << "Async_Method1" << std::endl;
  }
};

template <class Base>
class Async_Method2 : public Base {
 public:
  void Method2() override {
    std::cout << "Async_Method2" << std::endl;
  }
};

typedef Async_Method1<Async_Method2<Service > > AsyncService;

template <class Base>
class Sync_Method2 : public Base {
 public:
  void Method2() override {
    std::cout << "Sync_Method2" << std::endl;
  }
};

typedef Async_Method1<Sync_Method2<Service > > HybridService;

int main() {
  AsyncService service;
  service.Method1();
  service.Method2();

  HybridService hs;
  hs.Method1();
  hs.Method2();
}
