cc_binary(
    name = "async",
    srcs = ["async++.cpp"],
    deps = ["@async//:async"],
)

cc_binary(
    name = "cppitertools",
    srcs = ["cppitertools.cpp"],
    deps = ["@cppitertools//:cppitertools"],
    copts = ["-std=c++14"],
)

cc_binary(
    name = "fmt",
    srcs = ["fmt.cpp"],
    deps = ["@fmtlib//:fmt"],
)

cc_binary(
    name = "gflags",
    srcs = ["gflags.cpp"],
    deps = ["@com_github_gflags_gflags//:gflags"],
)

cc_binary(
    name = "glog",
    srcs = ["glog.cpp"],
    deps = ["@glog//:glog"],
)

cc_test(
    name = "google_test",
    srcs = ["google_test.cpp"],
    deps = ["@gtest//:gtest_main"]
)

cc_binary(
    name = "json",
    srcs = ["json.cpp"],
    deps = ["@json//:json"],
)

cc_binary(
    name = "strings",
    srcs = ["strings.cpp"],
    deps = ["@strings//:strings"],
)

proto_library(
    name = "example_proto",
    srcs = ["example.proto"],
)

cc_proto_library(
    name = "example_cc_proto",
    deps = [":example_proto"],
)

cc_binary(
    name = "proto_test",
    srcs = ["proto_test.cpp"],
    deps = [
        ":example_cc_proto",
    ]
)

proto_library(
    name = "rpc_helloworld_proto",
    srcs = ["rpc_helloworld.proto"],
)

cc_proto_library(
    name = "rpc_helloworld_cc_proto",
    deps = [":rpc_helloworld_proto"],
)

cc_binary(
    name = "rpc_server",
    srcs = ["rpc_server.cpp"],
    deps = [
        ":rpc_helloworld_cc_proto",
        "@grpc//:grpc",
    ]
)
