#include "kobuki.hpp"
#include <iostream>

void dll_function(void) {
//  std::cout << "  " << &Foo<int>::value << ":" << Foo<int>::value << std::endl;


  std::cout << "  " << Foo<int>::bar() << std::endl;
  Foo<int>::bar() = "foobard";
  std::cout << "  " << Foo<int>::bar() << std::endl;

//  Foo<float>::value = 0.25;
//  std::cout << "  " << &Foo<float>::value << ":" << Foo<float>::value << std::endl;
}
