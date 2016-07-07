#include <iostream>
#include <vector>
#include "cppitertools/enumerate.hpp"
#include "cppitertools/range.hpp"

template <typename T, typename RangeT,
          template <typename> class Container = std::vector>
Container<T> make(RangeT range) {
  return Container<T>(std::begin(range), std::end(range));
}

int main(int argc, char* argv[]) {
  std::vector<int> v = {0, 1, 2, 3};
  for (auto&& n : iter::enumerate(v)) {
    std::cout << n.first << " : " << n.second << std::endl;
  }

  auto range = iter::range(10);
  std::vector<int> r(std::begin(range), std::end(range));
  std::cout << r.size() << std::endl;

  auto range2 = iter::range(5);
  auto c = make<>(range2);
  std::cout << c.size() << std::endl;
  return 0;
}
