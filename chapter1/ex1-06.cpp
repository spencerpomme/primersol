#include <iostream>

int main() {
    int v1 = 0;
    int v2 = 0;
    std::cout << "Please enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    std::cout << v1 << " * " << v2;
    // Must have std::cout at the left side of <<:
     << " = " << v1 * v2 << std::endl; // <-- wrong!
    return 0;
}