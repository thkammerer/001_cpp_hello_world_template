# C++ Intro for Medical Engineering Students

This starter repository is designed for GitHub Classroom and GitHub Codespaces.

## Learning goals

- open a repository in Codespaces
- build a small C++ project with CMake
- run unit tests with GoogleTest
- make a change, commit it, and push it

## Project structure

- `src/main.cpp`: executable entry point
- `src/hello.cpp`: implementation
- `include/hello.hpp`: header file
- `tests/test_hello.cpp`: unit tests
- `.devcontainer/devcontainer.json`: Codespaces configuration
- `CMakeLists.txt`: build definition
- `CMakePresets.json`: shared configure/build/test presets

## First commands

```bash
cmake --preset default
cmake --build --preset default
ctest --preset default
./build/app
```

## First exercise

1. Change the greeting in `src/main.cpp`.
2. Add one more test in `tests/test_hello.cpp`.
3. Build and run tests again.
4. Commit and push your change.

## Useful Git commands

```bash
git add .
git commit -m "First change"
git push
```
