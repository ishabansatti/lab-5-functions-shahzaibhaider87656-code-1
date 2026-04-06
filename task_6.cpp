#include <iostream>

int main() {
    int counter = 0;

    auto incrementer = [&counter]() {
        counter++;
    };

    std::cout << "Starting value: " << counter << std::endl;

    incrementer();
    std::cout << "After call 1: " << counter << std::endl;

    incrementer();
    std::cout << "After call 2: " << counter << std::endl;

    incrementer();
    std::cout << "After call 3: " << counter << std::endl;

    return 0;
}