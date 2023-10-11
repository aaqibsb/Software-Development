# Valgrind Exercise

## Standard install via command-line
```bash
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run program:
  ./build/app/shell-app
# Clean
  cmake --build build/ --target clean
# Clean and start over:
  rm -rf build/
```

### What happens when the executable is linked statically?  Does Valgrind still detect those same bugs? Why or Why not?
When an executable is linked statically, it means that all the necessary libraries and dependencies are included within the executable itself, making it self-contained and not relying on external shared libraries. Static linking typically happens at compile time, and the resulting executable file includes all the code and data needed to run the program.

Valgrind is a dynamic analysis tool, and it primarily operates by intercepting system calls and memory operations at runtime. Therefore, it is more effective at detecting memory-related issues, such as memory leaks, uninitialized memory, and out-of-bounds memory access, when an application is dynamically linked because it can analyze the runtime behavior and interactions of your program with external libraries.

Valgrind can still detect certain types of bugs in statically linked executables, particularly those that occur within our own code, but its effectiveness is reduced in comparison to dynamically linked executables. For comprehensive analysis and debugging, it's often recommended to use dynamic linking when using Valgrind to ensure that it can thoroughly examine the interactions between our program and external libraries.
