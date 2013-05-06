#include "kobuki.hpp"
#include <iostream>

int main(int, char **) {
//  Foo<int>::value = 5;
//  std::cout << &Foo<int>::value << ":" << Foo<int>::value << std::endl;
  Foo<int>::bar() = "dude";
  std::cout << Foo<int>::bar() << std::endl;
  dll_function();
  std::cout << Foo<int>::bar() << std::endl;


//  std::cout << &Foo<float>::value << ":" << Foo<float>::value << std::endl;
//  std::cout << &Foo<float>::value << ":" << Foo<float>::bar() << std::endl;

}
