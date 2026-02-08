# INTEGRATOR

A C/C++ implementation of numerical integration methods for computing definite integrals.

## Overview
INTEGRATOR is a lightweight C/C++ project that provides numerical methods to approximate the definite integral of a function. It demonstrates fundamental concepts in computational mathematics and can be used as a foundation for more advanced numerical analysis tools.

## Mathematical Background

### What is Numerical Integration?
Numerical integration is a technique to approximate the definite integral of a function \( f(x) \) over an interval \([a, b]\):

\[
\int_a^b f(x) \, dx
\]

When an analytical solution is difficult or impossible to find, numerical methods provide approximations using discrete evaluations of the function.

### Implemented Methods
This project implements basic numerical integration techniques:

1. **Trapezoidal Rule**: Approximates the integral by dividing the area under the curve into trapezoids.
   - Formula: \(\int_a^b f(x) \, dx \approx \frac{h}{2} [f(a) + 2\sum_{i=1}^{n-1} f(a + ih) + f(b)]\)
   - Where \( h = \frac{b-a}{n} \), n is the number of subintervals.

2. **Simpson's Rule** (if implemented): Uses quadratic polynomials for better accuracy.
   - Formula: \(\int_a^b f(x) \, dx \approx \frac{h}{3} [f(a) + 4\sum_{i=1}^{n/2} f(a + (2i-1)h) + 2\sum_{i=1}^{n/2-1} f(a + 2ih) + f(b)]\)

The accuracy improves with more subintervals, but computational cost increases.

## Directory Structure
```
IPK/C_and_Cpp/INTEGRATOR/
├── app           # Main executable
├── math.h        # Header file with function declarations
├── math.c        # Implementation of mathematical functions
├── main.c        # Main program entry point
├── README.md     # This file
└── ...           # Additional source files if any
```

## Installation
1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd IPK/C_and_Cpp/INTEGRATOR
   ```

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

## Usage
- Run the executable to perform integration on predefined functions.
- Modify `math.c` and `math.h` to implement custom functions or add new integration methods.
- Example: The program may prompt for integration limits and compute the result using the trapezoidal rule.

## Requirements
- GCC or compatible C/C++ compiler
- Linux environment (tested on Ubuntu)

## Contributing
Contributions are welcome! Please follow these steps:
1. Fork the repository.
2. Create a feature branch: `git checkout -b feature-name`
3. Commit your changes: `git commit -am 'Add new feature'`
4. Push to the branch: `git push origin feature-name`
5. Submit a pull request.

## Issues
If you encounter any problems or have suggestions, please open an issue on the GitHub repository.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Author
Your Name
