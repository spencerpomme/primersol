#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item curr, last;
    int count = 0;
    
    if (std::cin >> last) {
        while (std::cin >> curr) {
            if (curr.isbn() == last.isbn()) {
                ++count;
                last = curr;
            } else {
                std::cout << last.isbn() << ": " << count << std::endl;
                count = 0;
            }
        }
        std::cout << last.isbn() << ": " << std::endl;
    } else {
        std::cout << "No input data!" << std::endl;
        return -1;
    }
    return 0;
}