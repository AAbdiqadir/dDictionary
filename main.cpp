#include <iostream>
#include "dictionary.h"
using namespace std;


int main() {
    Dictionary d = Dictionary();

    d.insert(1, "Nuno");
    std::cout << "Inserted 1st item" << std::endl;
    d.insert(2, "Amalio");
    std::cout << "Inserted 2nd item" << std::endl;

    std::cout << "The item with key 1 is " << *(d.lookup(1)) << std::endl;
    std::cout << "The item with key 2 is " << *(d.lookup(2)) << std::endl;

    d.insert(2, "Rodrigues");

    std::cout << "The item with key 2 is " << *(d.lookup(2)) << std::endl;

    d.insert(3, "Nottingham");

    std::cout << "The item with key 3 is " << *(d.lookup(3)) << std::endl;

    return 0;
}

