#include <iostream>

int fibonacci(int n);

int main() {
    std::cout << "The first 10 Fibonacci numbers are:" << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    
    std::cout << std::endl;

    return 0;
}

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}