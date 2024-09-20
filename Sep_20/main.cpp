#include <iostream>
#include "auto_ptr.h"
#include "unique_ptr.h"

int main() {
    // Auto_ptr<int> ptr (new int(5));
    // ptr.reset(new int(10));
    // std::cout << *ptr << std::endl;

    Unique_ptr<int> ptr (new int(1));
    ptr.reset(new int(2));
    std::cout << *ptr << std::endl;
    return 0;
}