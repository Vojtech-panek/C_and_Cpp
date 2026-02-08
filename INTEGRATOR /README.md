# INTEGRATOR

A C/C++ implementation of numerical integration methods for computing definite integrals.

## Mathematical Background

### What is Numerical Integration?
Numerical integration is a technique to approximate the definite integral of a function.
When an analytical solution is difficult or impossible to find, numerical methods provide approximations using discrete evaluations of the function.

### Implemented Methods
This project implements basic numerical integration techniques:

1. **Simpson's Rule**

The accuracy improves with more subintervals, but computational cost increases.


## Build Instructions
1. Ensure you have a C/C++ compiler installed (e.g., GCC).
2. Compile the project:
   ```bash
   gcc -o app math.c main.c   # Adjust source files as needed
   ```
3. Run the application:
   ```bash
   ./app
   ```

