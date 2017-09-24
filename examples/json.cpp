#include <iostream>
#include "json.hpp"

using json = nlohmann::json;

int main(int argc, char* argv[]) {
  json j = {{"pi", 3.141},
            {"happy", true},
            {"name", "Niels"},
            {"nothing", nullptr},
            {"answer", {{"everything", 42}}},
            {"list", {1, 0, 2}},
            {"object", {{"currency", "USD"}, {"value", 42.99}}}};

  std::cout << j.dump(4) << std::endl;
  return 0;
}
