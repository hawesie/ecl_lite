/**
 * @file /ecl_foo/dude/foo.hpp
 *
 * @brief File comment
 *
 * File comment
 *
 * @date 06/05/2013
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef FOO_HPP_
#define FOO_HPP_

#include <string>

/*****************************************************************************
** Class
*****************************************************************************/

template <typename T>
class Foo {
  public:
    Foo() {}
    static std::string& bar() {
      static std::string foobar = "foobar";
      return foobar;
    }

    //static T value;
};

#endif /* FOO_HPP_ */
