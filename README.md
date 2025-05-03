# LeetCode C++ Solutions

Gradually accumulating C++ solutions for LeetCode algorithm problems, managed and built with CMake.

## Directory Structure

- `problems/problem_name/`: Each problem has its own subdirectory containing the solution and test code.

---

## Build and Run

```bash
mkdir build && cd build
cmake ..
make
./problems/two_sum/two_sum
```

---

## Initialize the Git Repository

You can initialize the repository like this:

```bash
git init leetcode-cpp
cd leetcode-cpp
# Add files according to the structure above
git add .
git commit -m "init: LeetCode C++ project with CMake and first problem (two_sum)"
```

---

## Adding New Problems

To add a new problem, simply create a new directory under `problems/` following the structure of `two_sum`. CMake will automatically detect and build it.
