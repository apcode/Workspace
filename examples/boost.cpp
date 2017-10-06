#include <string>

#include "boost/algorithm/string.hpp"
#include "boost/format.hpp"

using namespace boost;

int main(int argc, char *argv[]) {
  auto line = "0,1,2,3";
  auto elems = split(line, is_any_of(","));

  for (const auto e : elems) {
    std::cout << format("%s: %d") % e % std::stoi(e) << std::endl;
  }
  return 0;
}
