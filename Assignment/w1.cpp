#include <iostream>
#include <cstring>
#include "process.h"
#include "cstring.h"
#define MAX_NUM 3

int main(int argc, char* argv[]){
  std::cout << "Command Line :";
  for (int arg = 0; arg < argc; arg++) {
    std::cout << " " << argv[arg];
  }
  std::cout << "\n";
  if (argc == 1){
    std::cout << "Insufficient number of arguments(minimum of 1)" << std::endl;
    return 1;
  }
  std::cout << "Maximum number of characters stored : " << MAX_NUM << std::endl;
  for (int arg = 1; arg < argc; arg++)
    process(argv[arg]);
  return 0;
}