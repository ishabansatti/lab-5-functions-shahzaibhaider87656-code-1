#include <iostream>

int square(int n);

int main() {
    int value = 7;

    int result = square(value);

    std::cout << "The square of " << value << " is " << result << std::endl;

    return 0;
}

int square(int n) {
    return n * n;
}