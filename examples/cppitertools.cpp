#include <iostream>
#include <vector>
#include "enumerate.hpp"
#include "range.hpp"

int main(int argc, char* argv[]) {
  std::vector<int> v = {0, 1, 2, 3};
  for (auto&& n : iter::enumerate(v)) {
    std::cout << n.index << " : " << n.element << std::endl;
  }

  auto range = iter::range(10);
  std::vector<int> r(std::begin(range), std::end(range));
  std::cout << r.size() << std::endl;
  return 0;
}
