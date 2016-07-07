package(default_visibility = ["//visibility:public"])

licenses(["notice"])  # Boost software license

cc_library(
    name = "async",
    srcs = glob([
      "asyncplusplus/src/*.h",
      "asyncplusplus/src/*.cpp",
    ]),
    hdrs = glob([
      "asyncplusplus/include/*.h",
    ]),
    includes = [
      "asyncplusplus/include",
      "asyncplusplus/include/async++",
    ],
)