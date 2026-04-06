#include <iostream>

int area(int side) {
    return side * side;
}

int area(int length, int width) {
    return length * width;
}

double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    int s = 5;
    std::cout << "Area of square with side " << s << ": " << area(s) << std::endl;

    int l = 10, w = 4;
    std::cout << "Area of rectangle " << l << "x" << w << ": " << area(l, w) << std::endl;

    double r = 3.0;
    std::cout << "Area of circle with radius " << r << ": " << area(r) << std::endl;

    return 0;
}