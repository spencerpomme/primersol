#include <iostream>

int main() {
    int start, end;
    std::cout << "Please enter two numbers: " << std::endl;
    std::cin >> start >> end;
    while (start <= end) {
        std::cout << start << " ";
        ++start;
    }
    std::cout << std::endl;

    return 0;
}