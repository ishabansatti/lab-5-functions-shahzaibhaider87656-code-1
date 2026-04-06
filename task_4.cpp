#include <iostream>
#include <cmath> 
bool isPrime(int n);

int main() {
   
    int testValues[] = {1, 2, 3, 4, 13, 17, 20, 25, 29};

    std::cout << "--- Prime Number Test ---" << std::endl;

    for (int val : testValues) {
        if (isPrime(val)) {
            std::cout << val << " is PRIME" << std::endl;
        } else {
            std::cout << val << " is NOT prime" << std::endl;
        }
    }

    return 0;
}

bool isPrime(int n) {
    if (n <= 1) return false;

    if (n == 2) return true;

    if (n % 2 == 0) return false;

    for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0) {
            return false; 
        }
    }

    return true; 
}