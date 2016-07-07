cc_binary(
    name = "google",
    srcs = [
         "google.cpp",
    ],
    deps = [
         "//third_party/gflags",
    ]
)

cc_test(
    name = "google_test",
    srcs = ["google_test.cpp"],
    deps = ["//third_party/gtest:gtest_main"]
)

cc_binary(
    name = "cppitertools",
    srcs = ["cppitertools.cpp"],
    deps = ["//third_party/cppitertools"],
)

cc_binary(
    name = "fmt",
    srcs = ["fmt.cpp"],
    deps = ["//third_party/fmtlib"],
)

cc_binary(
    name = "async",
    srcs = ["async++.cpp"],
    deps = ["//third_party/async"],
)

cc_binary(
    name = "strings",
    srcs = ["strings.cpp"],
    deps = ["//third_party/strings"],
)
