#include <iostream>
#include "folly/String.h"
int main() {
  folly::fbstring name("lol\n");
  std::cout << name << std::endl;
  return 0;
}
