#include <iostream>

int main() {
    int v1 = 0;
    int v2 = 0;
    std::cout << "Please enter two numbers: ";
    std::cout <<  << std::endl;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << v1;
    std::cout << " * ";
    std::cout << v2;
    std::cout << " = ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}