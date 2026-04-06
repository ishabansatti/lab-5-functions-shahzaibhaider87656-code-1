#include <iostream>

int power(int base, int exp);

int main() {
    int result1 = power(2, 8);
    int result2 = power(3, 4);

    std::cout << "2 to the power of 8 is: " << result1 << std::endl;
    std::cout << "3 to the power of 4 is: " << result2 << std::endl;

    return 0;
}

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    
    return base * power(base, exp - 1);
}