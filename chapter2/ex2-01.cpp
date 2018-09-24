#include <iostream>

int main() {
    short a;
    int b;
    long c;
    long long d;
    std::cout << "size of short: "        << sizeof(a) << "\n"
              << "size of int: "          << sizeof(b) << "\n"
              << "size of long: "         << sizeof(c) << "\n"
              << "size of long long: "    << sizeof(d) << "\n"
              << std::endl;

    unsigned int x;
    signed int y;
    std::cout << "size of unsigned int: " << sizeof(x) << "\n"
              << "size of signed int: "   << sizeof(y) << "\n"
              << std::endl;

    float m;
    double n;
    std::cout << "size of float: " << sizeof(m) << "\n"
              << "size of double: "   << sizeof(n) << "\n"
              << std::endl;

    return 0;
}