#include <iostream>
#include <google/protobuf/text_format.h>
#include "examples/example.pb.h"

int main(int argc, char* argv[]) {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  examples::Example ex;

  ex.set_id(101);
  ex.set_name("example proto");

  std::string s;
  google::protobuf::TextFormat::PrintToString(ex, &s);

  std::cout << s << std::endl;
  return 0;
}
