#include "f.hpp"
#include <iostream>

int main(int, char **) {
  ClassWithStatic<int>::value = 5;
  std::cout << &ClassWithStatic<int>::value << ":" << ClassWithStatic<int>::value << std::endl;
  dll_function();
  std::cout << &ClassWithStatic<float>::value << ":" << ClassWithStatic<float>::value << std::endl;
}
