// Euclidean Algorithm.cpp
// Author: CPaquin

#include <iostream>
#include <sstream>
#include <string>

// Prints out the current calculations
void ShowWork(int a, int b, int q, int r) {
    std::cout << "gcd(" << a << ", " << b << ") gives " << a << " = " << b << " * " << q << " + " << r << "\n";
}

// Recursively finds the GCD
int GCD(int v1, int v2) {
    // avoid divide by 0 scenarios
    if (v2 == 0) { return 0; }

    // a = bq + r
    int a = v1;
    int b = v2;
    int q = a / b;
    int r = a % b;

    ShowWork(a, b, q, r);

    // base case for recursion. If we get to this point we have our answer
    if (a % b == 0) { 
        return b; 
    }

    // recursively calls GCD on b and r
    return GCD(b, r);
}

int main()
{
    int a = 0; 
    int b = 0;

    std::cout << "Let's calculate the GCD of 2 numbers using Euclidean's Algorithm!\n\n";

    std::cout << "Enter value 1: ";
    std::cin >> a;

    std::cout << "Enter value 2: ";
    std::cin >> b;

    std::cout << "\nThe greatest common denominator of " << a << " and " << b << " is " << GCD(a, b) << "\n";
}
