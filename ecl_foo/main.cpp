/**
 * @file /ecl_config/src/main.cpp
 *
 * @brief File comment
 *
 * File comment
 *
 * @date 06/05/2013
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <iostream>
#include "f.hpp"

int main() {
  std::cout << std::endl;
  std::cout << "Construct on first use idiom - http://www.parashift.com/c++-faq/static-init-order-on-first-use.html" << std::endl;
  std::cout << std::endl;
  std::cout << "Testing with a library function" << std::endl;
  std::cout << std::endl;
  dude();
  dude();
  dude();
  std::cout << "Yeah, it's a " << fiasco() << std::endl;
  std::cout << std::endl;
  std::cout << "Testing with an inline function" << std::endl;
  std::cout << std::endl;
  inline_dude();
  inline_dude();
  inline_dude();
  std::cout << "Yeah, it's a " << inline_fiasco() << std::endl;
  return 0;
}
