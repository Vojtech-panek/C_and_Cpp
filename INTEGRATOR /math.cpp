#include "math.h"
#include <iostream>
#include <cmath>

double f(double x) {
    // Define the function to integrate here
    return x * x; // Example: f(x) = x^2
}

double integrate(double a, double b, int n){
if (n % 2 != 0) {
        std::cerr << "n must be even!" << std::endl;
        return NAN;
    }

    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0)
            sum += 2 * f(x);
        else
            sum += 4 * f(x);
    }

    return sum * h / 3.0;
}