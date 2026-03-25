# Setup guide for the instructor

## 1. Create the repository

Create a new GitHub repository and upload all files from this starter.

## 2. Use it as the GitHub Classroom template

In GitHub Classroom, create a new assignment and select this repository as the starter/template repository.
Choose GitHub Codespaces as the preferred editor.

## 3. Student workflow

Students accept the Classroom assignment link, open their own repository in Codespaces, wait until the container is ready, and then run:

```bash
cmake --preset default
cmake --build --preset default
ctest --preset default
```

## 4. In-class teaching flow

- show the file structure
- explain `main.cpp`, `hello.cpp`, `hello.hpp`
- run the build
- run the tests
- change code and rerun tests
- make one commit and push it

## 5. Optional next step

In the second session, students can implement a small calculation function, for example:
- mean value
- body mass index
- unit conversion
- threshold check with tests
