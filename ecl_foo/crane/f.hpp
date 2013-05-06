#ifndef TEMP_DLL_DLL_DLL_HEADER_H
#define TEMP_DLL_DLL_DLL_HEADER_H

#pragma warning(push)
#pragma warning(disable : 4231)

#ifdef ecl_crane_EXPORTS
  #define ecl_crane_PUBLIC __declspec(dllexport)
  #define EXP_TEMPLATE
#else
  #define ecl_crane_PUBLIC __declspec(dllimport)
  #define EXP_TEMPLATE extern
#endif

template <typename T>
class ecl_crane_PUBLIC ClassWithStatic {
  public:
    static T value;
};
template <typename T> T ClassWithStatic<T>::value;

EXP_TEMPLATE template class ClassWithStatic<int>;
EXP_TEMPLATE template class ClassWithStatic<float>;

ecl_crane_PUBLIC void dll_function(void);

#pragma warning(pop)

#endif
