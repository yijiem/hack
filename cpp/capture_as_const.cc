#include <iostream>

int main() {
  int* ptr = new int;
  auto l = [ptr = static_cast<int* const>(ptr)]() mutable {
    *ptr = 1024;
  };
  l();
  std::cout << *ptr << std::endl;
}
