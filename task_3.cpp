#include <iostream>

int multiply(const int &a, const int &b);

int main() {
    int num1 = 6;
    int num2 = 8;

    int result = multiply(num1, num2);

    std::cout << "The product of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}

int multiply(const int &a, const int &b) {
    return a * b;
}