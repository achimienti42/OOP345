#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include "cstring.h"

namespace w1 {
  CString::CString(char* parm) {
    if (parm == NULL) {
      str[0] = '\0';
      return;
    }
    strncpy(str, parm, MAX_NUM);
    str[MAX_NUM] = '\0';
  }

  void CString::display(std::ostream& os) {
    os << str;
  }

  std::ostream& operator<<(std::ostream& os, CString cs) {
    static int calls = 0;
    os << calls++ << ": ";
    cs.display(os);
    return os;
  }
}