#include <iostream>
#include <typeinfo>


int main() {
    // (a)
    std::cout << "\'a\'"   << " : " << typeid('a').name()   << std::endl;
    std::cout << "L\'a\'"  << " : " << typeid(L'a').name()  << std::endl;
    std::cout << "\"a\""   << " : " << typeid("a").name()   << std::endl;
    std::cout << "L\"a\""  << " : " << typeid(L"a").name()  << std::endl;
    // (b)
    std::cout << 10        << " : " << typeid(10).name()    << std::endl;
    std::cout << "10u"     << " : " << typeid(10u).name()   << std::endl;
    std::cout << "10L"     << " : " << typeid(10L).name()   << std::endl;
    std::cout << "10uL"    << " : " << typeid(10uL).name()  << std::endl;
    std::cout << "012"     << " : " << typeid(012).name()   << std::endl;
    std::cout << "0xC"     << " : " << typeid(0xC).name()   << std::endl;
    // (c)
    std::cout << 3.14      << " : " << typeid(3.14).name()  << std::endl;
    std::cout << "3.14f"   << " : " << typeid(3.14f).name() << std::endl;
    std::cout << "3.14L"   << " : " << typeid(3.14L).name() << std::endl;
    // (d)
    std::cout << 10        << " : " << typeid(10).name()    << std::endl;
    std::cout << "10u"     << " : " << typeid(10u).name()   << std::endl;
    std::cout << "10."     << " : " << typeid(10.).name()   << std::endl;
    std::cout << "10e-2"   << " : " << typeid(10e-2).name() << std::endl;

    return 0;
}