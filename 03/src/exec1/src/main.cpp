#include <iostream>
#include "mylib.h"

int main(int argc, char *argv[]) {
  int add_result = add(5, 2);
  int subtract_result = subtract(5, 2);
  int version_result = version();
  std::cout << "add_result = " << add_result << std::endl;
  std::cout << "subtract_result = " << subtract_result << std::endl;
  std::cout << "version_result = " << version_result << std::endl;
  return 0;
}