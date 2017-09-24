# Workspace for bazel C++ projects

This is a starting workspace for [bazel](http://bazel.io) projects.

You just need to add the WORKSPACE and *.BUILD files that you require
to your project. This will pull in the git repos and make them
available to use in your project.

Example programs using each of the libraries are provided in the
examples directory. You can also see how to build these in the
examples/BUILD file.

## Included Repos

The following libraries are included in the WORKSPACE. These are all
pulled and built automatically from github.

- protobuf - Google's protobuf serialization library.
- async++ - concurrency framework inspired by MS PPL.
- gflags - commandline flags library.
- cppitertools - python itertools in C++.
- fmtlib - formatting and io library, python format style.
- glog - Google's logging library
- gtest - Google's unit test and mock library.
- json - Modern C++ json library.
- strings - a few string utilities.

## Typical Usage

I find using Bazel to build C++ projects the simplest way to build and
use external projects and libraries.

To build all examples (cc_binary and other rules):

    bazel build examples:all

To build specific program:

    bazel build examples:json
    
To run, and build if needed:

    bazel run examples:json
    
To run unit tests for a project (cc_test rules):

    bazel test example:gtest

## Adding your own repos

You can add a github or local repository to your workspace, in
addition to the ones already provided. Bazel will fetch and build
these, making it available to your workspace.

You can add something like the following to the WORKSPACE file:

    git_repository(
      name = "repo_name",
      commit = "f3b46d5ce2637f8e72e49a05f6cd2fbf5bc62870",
      remote = "https://github.com/user/project.git",
    )

Or, if you need to define your own BUILD file:

    new_git_repository(
      name = "repo_name",
      remote = "https://github.com/user/project.git"
      build_file = "project.BUILD",
    )
    
And add a project.BUILD file to build the project.

Alternatively you can include and link to local projects by adding a
local repository:

    local_repository(
      name = "external-project",
      path = "/path/to/external-project",
    )
