# Workspace for bazel projects

This is a starting workspace for [bazel](http://bazel.io) projects.
Bazel is designed to have all your source code within one workspace
directory. The presence of a file called WORKSPACE is enough for bazel
to treat the directory as the parent of all your projects. External
projects should be kept in the third\_party directory. You can have a
WORKSPACE file per project and pull in repositories into each project.

The tools/ directory is a copy of bazel's tools/cpp files changed to
compile to c++14 rather than the default c++0x.

Install submodues too:

    git clone --recursive git@github.com:apcode/Workspace.git
 
## Typical Usage

To create a project you can just add a directory for the project and
make it a git repo if you want to retain source control. This git repo
will ignore all your own directories not in examples/ or third\_party/.
You will then be able to use any other project and all the third\_party
libraries in your new project. The code in examples/ shows how to use
other projects.

## Pulling in external repos

If you want to use external repos not in this workspace you have two
choices. If the external projects don't use bazel to build you will
have to create your own BUILD file. See
[Types of external dependencies.](http://www.bazel.io/docs/external.html#types-of-external-dependencies)

### Add submodule
You can add an external project as a submodule. This is then embedded in the workspace. 

    git submodule add http://www.github.com/myrepo project_folder

This is how the third\_party libraries have been added. In some of
these cases a separate BUILD file was created to make them build with
bazel.

### Defining a local repository 

You can add a repository to your workspace. Bazel will fetch and build
this, making it available to your workspace.

You can add something like the following to the WORKSPACE file:

    local_repository(
      name = "external-project",
      path = "/path/to/external-project",
    )

Or,

    git_repository(
      name = "project_git",
      commit = "f3b46d5ce2637f8e72e49a05f6cd2fbf5bc62870",
      remote = "https://github.com/user/project.git",
    )

Or, if you need to define your own BUILD file:

    new_local_repository(
      name = "external-project",
      path = "/path/to/external-project",
      build_file = "external-project.BUILD",
    )
