/**
 * @file /ecl_config/src/f.hpp
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

#ifndef F_HPP_
#define F_HPP_

#include <string>

/*****************************************************************************
** PreProcessing
*****************************************************************************/

#ifdef _MSC_VER
  #define ECL_HELPER_IMPORT __declspec(dllimport)
  #define ECL_HELPER_EXPORT __declspec(dllexport)
  #define ECL_HELPER_LOCAL
#endif

/*
 * Import/exports symbols for the library
 */
#ifdef _MSC_VER
  #ifdef ecl_foo_EXPORTS // we are building a shared lib/dll
    #define ecl_foo_PUBLIC ECL_HELPER_EXPORT
  #else // we are using shared lib/dll
    #define ecl_foo_PUBLIC ECL_HELPER_IMPORT
  #endif
  #define ecl_foo_LOCAL ECL_HELPERS_LOCAL
#else
  #define ecl_foo_PUBLIC
#endif

/*****************************************************************************
** Includes
*****************************************************************************/

ecl_foo_PUBLIC void fooDude();

inline const std::string& fiasco() {
  static std::string fiasco_str = "fiasco";
  fiasco_str = fiasco_str + '.';
  return fiasco_str;
}
#endif /* F_HPP_ */
