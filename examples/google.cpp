#include <iostream>
#include "gflags/gflags.h"

DEFINE_string(name, "", "test param");

int main(int argc, char *argv[]) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);

  std::cout << "Name: " << FLAGS_name << std::endl;
  return 0;
}
