/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef TEMP_DLL_DLL_DLL_HEADER_H
#define TEMP_DLL_DLL_DLL_HEADER_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include "sigslots.hpp"

/*****************************************************************************
** Macros
*****************************************************************************/

#ifdef ecl_kobuki_EXPORTS
  #define ecl_kobuki_PUBLIC __declspec(dllexport)
  #define EXP_TEMPLATE
#else
  #define ecl_kobuki_PUBLIC __declspec(dllimport)
  #define EXP_TEMPLATE extern
#endif

/*****************************************************************************
** Instantiations and Declarations
*****************************************************************************/

//template <typename T> T Foo<T>::value;

EXP_TEMPLATE template class ecl_kobuki_PUBLIC Foo<int>;
EXP_TEMPLATE template class ecl_kobuki_PUBLIC Foo<float>;

ecl_kobuki_PUBLIC void dll_function(void);

#endif
