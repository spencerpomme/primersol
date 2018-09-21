#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item curr, total;
    if (std::cin >> total) {
        while (std::cin >> curr) {
            if (curr.isbn() == total.isbn()) {
                total += curr;
            } else {
                std::cout << "Different ISBN!" << std::endl;
                return -1;
            }
        }
        std::cout << "Summary: " << total << std::endl;
    } else {
        std::cout << "No input!" << std::endl;
        return -1;
    }
    return 0;
}