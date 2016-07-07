#include <cstdio>
#include "strings.hpp"

using namespace strings;

int main(int argc, char *argv[])
{
  std::string s1 = "A::B::::C::Dee";
  std::vector<std::string> splits = split(s1, "::");
  std::printf("Expected length 5 got %lu\n", splits.size());
  std::string s2 = join(splits, "::");
  std::printf("Strings are equal: %s\n", (s1 == s2 ? "true" : "false"));
  return 0;
}
