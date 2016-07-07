licenses(["notice"])

cc_library(
  name = "gtest",
  testonly = 1,
  visibility = ["//visibility:public"],
  includes = [
    "googletest/googletest/include",
  ],
  hdrs = [
    "googletest/googletest/include/gtest/gtest-death-test.h",
    "googletest/googletest/include/gtest/gtest-message.h",
    "googletest/googletest/include/gtest/gtest_pred_impl.h",
    "googletest/googletest/include/gtest/gtest-test-part.h",
    "googletest/googletest/include/gtest/gtest.h",
    "googletest/googletest/include/gtest/gtest-param-test.h",
    "googletest/googletest/include/gtest/gtest-printers.h",
    "googletest/googletest/include/gtest/gtest-spi.h",
    "googletest/googletest/include/gtest/gtest-typed-test.h"
  ],
  srcs = glob([
    "googletest/googletest/include/gtest/internal/**/*.h"
  ]) +[
    "googletest/googletest/src/gtest-internal-inl.h",
    "googletest/googletest/src/gtest-death-test.cc",
    "googletest/googletest/src/gtest-filepath.cc",
    "googletest/googletest/src/gtest-port.cc",
    "googletest/googletest/src/gtest-printers.cc",
    "googletest/googletest/src/gtest-test-part.cc",
    "googletest/googletest/src/gtest-typed-test.cc",
    "googletest/googletest/src/gtest.cc",
  ],
  copts = [
    "-Ithird_party/gtest/googletest/googletest"
  ],
  deps = [
    "//third_party/gflags",
    ":gtest_prod",
  ],
)

cc_library(
  name = "gtest_main",
  testonly = 1,
  visibility = ["//visibility:public"],
  deps = [
    ":gtest",
  ],
  srcs = [
    "googletest/googletest/src/gtest_main.cc",
  ],
)

cc_library(
  name = "gtest_prod",
  visibility = ["//visibility:public"],
  hdrs = [
    "googletest/googletest/include/gtest/gtest_prod.h",
  ],
)

cc_library(
  name = "gmock",
  testonly = 1,
  visibility = ["//visibility:public"],
  hdrs = [
    "googletest/googlemock/include/gmock/gmock-actions.h",
    "googletest/googlemock/include/gmock/gmock-cardinalities.h",
    "googletest/googlemock/include/gmock/gmock-generated-actions.h",
    "googletest/googlemock/include/gmock/gmock-generated-function-mockers.h",
    "googletest/googlemock/include/gmock/gmock-generated-matchers.h",
    "googletest/googlemock/include/gmock/gmock-generated-nice-strict.h",
    "googletest/googlemock/include/gmock/gmock.h",
    "googletest/googlemock/include/gmock/gmock-matchers.h",
    "googletest/googlemock/include/gmock/gmock-more-actions.h",
    "googletest/googlemock/include/gmock/gmock-more-matchers.h",
    "googletest/googlemock/include/gmock/gmock-spec-builders.h",
  ],
  srcs = glob([
    "googletest/googlemock/include/gmock/internal/**/*.h"
  ]) + [
    "googletest/googlemock/src/gmock-cardinalities.cc",
    "googletest/googlemock/src/gmock.cc",
    "googletest/googlemock/src/gmock-internal-utils.cc",
    "googletest/googlemock/src/gmock-matchers.cc",
    "googletest/googlemock/src/gmock-spec-builders.cc",
  ],
  deps = [
    ":gtest",
  ],
  includes = [
    "googletest/googlemock/include",
  ],
)

cc_library(
  name = "gmock_main",
  visibility = ["//visibility:public"],
  deps = [
    ":gmock",
  ],
  srcs = [
    "googletest/googlemock/src/gmock_main.cc",
  ],
)
