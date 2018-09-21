#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book;
    std::cout << "Insert sales record: " << std::endl;
    while (std::cin >> book) {
        std::cout << book << std::endl;
    }
    return 0;
}
