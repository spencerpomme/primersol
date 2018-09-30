#include <iostream>

int main() {
    int month = 9, day = 7;
    int mouth = 09, dey = 07; // <- mouth = 09 would trigger an error.
                              // error: invalid digit '9' in octal constant

    std::cout << month << " " << day << std::endl;
    std::cout << mouth << " " << dey << std::endl;

    return 0;
}