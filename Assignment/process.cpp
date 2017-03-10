#include "process.h"
#include "cstring.h"
#include <iostream>

void process(char* parm) {
  w1::CString cs(parm);
  std::cout << cs;
  std::cout << "\n";
}