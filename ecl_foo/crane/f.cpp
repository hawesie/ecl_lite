#include "f.hpp"
#include <iostream>

void dll_function(void) {
  std::cout << &ClassWithStatic<int>::value << ":" << ClassWithStatic<int>::value << std::endl;
  ClassWithStatic<float>::value = 0.25;
  std::cout << &ClassWithStatic<float>::value << ":" << ClassWithStatic<float>::value << std::endl;
}
