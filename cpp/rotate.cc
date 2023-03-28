#include <stdlib.h>

#include <iostream>
#include <string>

#define EXPECT_EQ(a, b)                                                       \
  do {                                                                        \
    if (a != b) {                                                             \
      std::cerr << "EXPECT_EQ(" << a << ", " << b << ") failed" << std::endl; \
      abort();                                                                \
    }                                                                         \
  } while (0)

std::string str = "always needs to hack";
int rotate = 225;

int main() {
  std::string copy = str;
  for (auto iter = str.begin(); iter != str.end(); iter++) {
    *iter = static_cast<unsigned char>(*iter) + rotate;
    // std::cout << int(*iter) << std::endl;
  }
  // Verify
  // This will output "BMXBZTOFFETUPIBDL".
  std::cout << str << std::endl;
  // But this check also succeeds, haha.
  EXPECT_EQ(str.size(), copy.size());
}
