#include <iostream>

int accumulate(int value) {
    static int runningTotal = 0; 
    
    runningTotal += value; 
    return runningTotal;
}

int main() {

    std::cout << "Adding 10: Current Total = " << accumulate(10) << std::endl;
    std::cout << "Adding 25: Current Total = " << accumulate(25) << std::endl;
    std::cout << "Adding 5:  Current Total = " << accumulate(5)  << std::endl;

    return 0;
}