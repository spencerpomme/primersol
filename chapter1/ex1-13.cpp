#include <iostream>

void ex1_09();
void ex1_10();
void ex1_11();

int main() {
    ex1_09();
    ex1_10();
    ex1_11();
    return 0;
}

void ex1_09() {
    int sum = 0, val = 50;
   for (int val = 50; val <= 100; ++val) {
        sum += val;
    }
    std::cout << "Sum from 50 to 100 is" << sum << std::endl;
}

void ex1_10() {
    int sum = 0, val = 10;
    for (int val = 10; val >= 0; --val) {
        sum += val;
    }
    std::cout << "Sum from 10 to 0 is" << sum << std::endl;
}

void ex1_11() {
    int start, end;
    std::cout << "Please enter two numbers: " << std::endl;
    std::cin >> start >> end;
    for (; start <= end; ++start) {
        std::cout << start << " ";
    }
    std::cout << std::endl;
}