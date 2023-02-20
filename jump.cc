#include <iostream>
#include <csetjmp>
 
std::jmp_buf my_jump_buffer;
int res = 0;
 
[[noreturn]] void foo(int count) 
{
    std::cout << "foo(" << count << ") called\n";
    std::longjmp(my_jump_buffer, count+1);  // setjmp() will return count+1
}

void wrapped() {
    int count = 0;
    res = setjmp(my_jump_buffer);
    count = count + 1;
    std::cout << "wrapped: " << count << std::endl;
}

int main()
{
    int count = 0; // modified locals in setjmp scope must be volatile
    wrapped();
    while (res != 5) {
      while (res != 5) {
          foo(count++);
      }
      std::cout << "res: " << res << std::endl;
    }
    std::cout << "exit" << std::endl;
}
