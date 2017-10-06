http_archive(
    name = "com_google_protobuf",
    urls = ["https://github.com/google/protobuf/archive/b4b0e304be5a68de3d0ee1af9b286f958750f5e4.zip"],
    strip_prefix = "protobuf-b4b0e304be5a68de3d0ee1af9b286f958750f5e4",
)

http_archive(
    name = "com_google_protobuf_cc",
    urls = ["https://github.com/google/protobuf/archive/b4b0e304be5a68de3d0ee1af9b286f958750f5e4.zip"],
    strip_prefix = "protobuf-b4b0e304be5a68de3d0ee1af9b286f958750f5e4",
)

git_repository(
    name = "antonovvk_bazel_rules",
    remote = "https://github.com/antonovvk/bazel_rules",
    commit = "36c56e5b96731d01693500f86dcb23ff9b405e34",
)

new_git_repository(
    name = "async",
    build_file = "async.BUILD",
    remote = "https://github.com/Amanieu/asyncplusplus.git",
    commit = "22f88fa7f1f3d5548bbeb2862f9ae60b1468273c",
)

# Selection of useful boost libs - excludes libs already part of C++11

new_git_repository(
    name = "com_github_boost_algorithm",
    build_file = "boost_algorithm.BUILD",
    commit = "554db2f07dcbf65c760d75b559ff2011edf66809",
    remote = "https://github.com/boostorg/algorithm.git",
)

bind(
    name = "boost_algorithm",
    actual = "@com_github_boost_algorithm//:algorithm",
)

# End of boost libs

git_repository(
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags.git",
    commit = "60784b53e364c2e2594916bc84af075c4f679fa8",
)

new_git_repository(
    name = "cppitertools",
    build_file = "cppitertools.BUILD",
    remote = "https://github.com/ryanhaining/cppitertools.git",
    commit = "427815328a0ae057087177dc10227f4f301da8c4",
)

new_git_repository(
    name = "fmtlib",
    build_file = "fmtlib.BUILD",
    remote = "https://github.com/fmtlib/fmt.git",
    commit = "2a619d96dd5d8bf940e20ae60b4cf2a5106c7365",
)

new_git_repository(
    name = "glog",
    remote = "https://github.com/google/glog.git",
    commit = "b6a5e0524c28178985f0d228e9eaa43808dbec3c",
    build_file = "glog.BUILD"
)

new_git_repository(
    name = "gtest",
    build_file = "gtest.BUILD",
    remote = "https://github.com/google/googletest.git",
    commit = "f1a87d73fc604c5ab8fbb0cc6fa9a86ffd845530",
)

new_git_repository(
    name = "json",
    build_file = "json.BUILD",
    remote = "https://github.com/nlohmann/json.git",
    commit = "647711fad1e2dd08b14f62d6c4c4b3c563ee4863",
)

git_repository(
    name = "strings",
    remote = "https://github.com/apcode/strings.git",
    commit = "f9b708db49b4468dd0ff1e3e70f5777eb4aaaefa",
)
