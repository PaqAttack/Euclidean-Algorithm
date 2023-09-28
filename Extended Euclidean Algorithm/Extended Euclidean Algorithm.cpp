// Extended Euclidean Algorithm.cpp
//

#include <iostream>
#include <vector>


int EGCD(int a, int b) {
    // gcd(a, b) = sx + ty

    // This will hold all values in the sequence
    std::vector<int> sequence;
    sequence.push_back(a);
    sequence.push_back(b);

    while (a % b != 0) {
        sequence.push_back(a % b);
        int y = a % b;
        a = b;
        b = y;
    }

    std::cout << "hi";

    return 1;

}


int main()
{
    int a = 0;
    int b = 0;

    std::cout << "Let's calculate the GCD of 2 numbers using the Extended Euclidean's Algorithm!\n\n";

    std::cout << "Enter value 1: ";
    std::cin >> a;

    std::cout << "Enter value 2: ";
    std::cin >> b;

    std::cout << "\nThe greatest common denominator of " << a << " and " << b << " is " << EGCD(a, b) << "\n";
}

