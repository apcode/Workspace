#include <iostream>
#include "fmt/format.h"

int main(int argc, char *argv[]) {
  auto s = fmt::format("The answer is {}\n", 42);
  fmt::print(s);
  fmt::print("Don't {}\n", "panic");
  return 0;
}
