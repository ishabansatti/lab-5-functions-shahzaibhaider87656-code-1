#include <iostream>
#include <string>

void printType(int i) {
    std::cout << "The argument is an Integer: " << i << std::endl;
}

void printType(double d) {
    std::cout << "The argument is a Double: " << d << std::endl;
}

void printType(char c) {
    std::cout << "The argument is a Character: '" << c << "'" << std::endl;
}

void printType(const std::string &s) {
    std::cout << "The argument is a String: \"" << s << "\"" << std::endl;
}

int main() {
    printType(42);              
    printType(3.14159);        
    printType('A');              
    printType("Hello, World!");   

    return 0;
}