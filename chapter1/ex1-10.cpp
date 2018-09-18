#include <iostream>

int main() {
    int sum = 0, val = 10;
    while (val >= 0) {
        sum += val;
        --val;
        // std::cout << sum << std::endl;
    }
    std::cout << "Sum from 10 to 0 is" << sum << std::endl;

    return 0;
}