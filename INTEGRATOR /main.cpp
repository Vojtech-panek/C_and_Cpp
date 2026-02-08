
#include <iostream>
#include "math.h"

int main() {
    int a{};
    int b{};
    std::cout << "INTEGRATOR: "<<"\n";
    std::cout << "Enter boundaries: "<<"\n";  
    std::cin>>a>>b;
    std::cout << "Enter the number of intervals (even number): "<<"\n";
    int n{};
    std::cin>>n;
    double result = integrate(a, b, n);
    std::cout << "Result: " << result << "\n";
   
    return 0;
}
