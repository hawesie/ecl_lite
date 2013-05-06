/**
 * @file /ecl_config/src/config.cpp
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

void dude() {
  std::cout << "fooDude::Hello Dude" << std::endl;
  std::cout << "What a " << fiasco() << std::endl;
}

void inline_dude() {
  std::cout << "fooDude::Hello Dude" << std::endl;
  std::cout << "What a " << inline_fiasco() << std::endl;
}

const std::string& fiasco() {
  static std::string fiasco_str = "fiasco";
  fiasco_str = fiasco_str + '.';
  return fiasco_str;
}

