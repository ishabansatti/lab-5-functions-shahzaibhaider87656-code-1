#include <iostream>

int generateID() {
    static int currentID = 1001; 
    
    return currentID++;
}

int main() {
    std::cout << "--- Generating System IDs ---" << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cout << "New ID: " << generateID() << std::endl;
    }

    return 0;
}