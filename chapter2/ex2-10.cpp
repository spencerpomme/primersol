#include <iostream>
#include <string> // <- must include this in order to cout a string!

std::string global_str;
int gloabal_int;

int main() {
    int local_int;
    std::string local_str;
    std::cout << gloabal_int << std::endl;
    std::cout << local_int << std::endl;
    std::cout << global_str << std::endl;
    std::cout << local_str << std::endl;

    return 0;
}