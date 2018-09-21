#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;
    std::cout << "Please enter two sales item: " << std::endl;
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn())
        std::cout << "Sum: " << item1 + item2 << std::endl;
    else
        std::cout << "The two records have different isbn." << std::endl;
    return 0;
}