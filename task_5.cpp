#include <iostream>

int main() {
    int x = 5;
    int y = 10;

    auto mathOperations = [x, y]() {
        int sum = x + y;
        int product = x * y;
        
        std::cout << "Values captured: x = " << x << ", y = " << y << std::endl;
        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Product: " << product << std::endl;
    };

    mathOperations();

    return 0;
}